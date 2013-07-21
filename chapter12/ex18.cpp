#include <iostream>
#include <vector>
#include <cstdlib>

enum Position { start, end };

using namespace std;

class Obj {
    static int i, j;
public:
    void f() const { cout << i++ << endl; }
    void g() const { cout << j++ << endl; }
};
// Static member definitions:
int Obj::i = 47;
int Obj::j = 11;
// Container:
class ObjContainer {
    vector<Obj*> a;
public:
    void add(Obj* obj) { a.push_back(obj); }
    friend class SmartPointer;
};
class SmartPointer {
    ObjContainer& oc;
    int index;
public:
    SmartPointer(ObjContainer& objc, Position startPosition) : oc(objc) {
	index = startPosition == start ? 0 : objc.a.size();
    }
// Return value indicates end of list:
    bool operator++() { // Prefix
	if(index >= oc.a.size()) return false;
	if(oc.a[++index] == 0) return false;
	return true;
    }
    bool operator++(int) { // Postfix
	return operator++(); // Use prefix version
    }
    bool operator--() {
	if (index <= 0) return false;
	if (oc.a[--index] == 0) return false;
	return true;
    }
    bool operator--(int){
	return operator--();
    }
    Obj* operator->() const {
	return oc.a[index];
    }
};
int main() {
    const int sz = 10;
    Obj o[sz];
    ObjContainer oc;
    for(int i = 0; i < sz; i++)
	oc.add(&o[i]); // Fill it up
    SmartPointer sp(oc, start); // Create an iterator
    do {
	sp->f(); // Pointer dereference operator call
	sp->g();
    } while(sp++);
    cout << "backwards" << endl;
    SmartPointer sp2(oc, end); // Create an iterator
    do {
	sp2->f(); // Pointer dereference operator call
	sp2->g();
    } while(sp2--);
}
