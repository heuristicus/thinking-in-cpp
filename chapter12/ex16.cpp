#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class bird
{
public:
    bird() {
	ostringstream oss;
	val = id;
	oss << "bird #" << id++;
	name = oss.str();
    };
    bird(const bird& b){
    	cout << "copy constructor" << endl;
	val = b.val;
	name = b.name;
    }
    virtual ~bird(){};
    bird& operator=(const bird& b){
    	cout << "operator=" << endl;
    	if (&b != this){
	    cout << "not equivalent" << endl;
    	    id = b.id;
    	    name = b.name;
	    val = b.val;
    	} else {
	    cout << "equivalent" << endl;
	}
    	return *this;
    }
    friend ostream& operator<<(ostream& os, const bird& b);
    // int operator+(const bird& b){
    // 	return val + b.val;
    // }
    // int operator+(const int& b){
    // 	return val + b;
    // }
    bird operator+(const bird& b) const {
	bird ret;
	ret.val = val + b.val;
	return ret;
    }
    bird operator-(const bird& b) const {
	bird ret;
	ret.val = val - b.val;
	return ret;
    }
    bird operator*(const bird& b) const {
	bird ret;
	ret.val = val * b.val;
	return ret;
    }
    bird operator/(const bird& b) const {
	bird ret;
	ret.val = val / b.val;
	return ret;
    }
    int getVal(){ return val; };
private:
    string name;
    int val;
    static int id;
};

class birdHouse
{
public:
    birdHouse(bird a, bird b, bird c) : birdRef(c){
	birdObj = a;
	birdPtr = &b;
	bhVal = (a + b + c).getVal();
    };
    virtual ~birdHouse(){};
    friend ostream& operator<<(ostream& os, const birdHouse& bh);
    birdHouse operator+(const birdHouse& b){
	birdHouse ret(birdObj + b.birdObj, *(birdPtr) + *(b.birdPtr), birdRef + b.birdRef);
	return ret;
    }
    birdHouse operator-(const birdHouse& b){
	birdHouse ret(birdObj - b.birdObj, *(birdPtr) - *(b.birdPtr), birdRef - b.birdRef);
	return ret;
    }
    birdHouse operator*(const birdHouse& b){
	birdHouse ret(birdObj * b.birdObj, *(birdPtr) * *(b.birdPtr), birdRef * b.birdRef);
	return ret;
    }
    birdHouse operator/(const birdHouse& b){
	birdHouse ret(birdObj / b.birdObj, *(birdPtr) / *(b.birdPtr), birdRef / b.birdRef);
	return ret;
    }
private:
    int bhVal;
    bird birdObj;
    bird* birdPtr;
    bird& birdRef;
    birdHouse(const birdHouse& bh);
    birdHouse& operator=(const birdHouse& bh);
};

int bird::id = 0;

ostream& operator<<(ostream& os, const bird& b){
    os << b.name;
    return os;
}

ostream& operator<<(ostream& os, const birdHouse& bh)
{
    os << bh.birdObj << ", " << *(bh.birdPtr) << ", " << bh.birdRef;
    return os;
}

int main(int argc, char *argv[])
{
    bird b;
    bird c;
    cout << c << endl;
    cout << b << endl;
    c = b;
    b = b;
    bird d = c;
    
    cout << c << endl;
    cout << d << endl;
    
    bird e;
    bird f;
    bird g;

    birdHouse h(e, f, g);
    cout << h << endl;

    birdHouse h2(g, f, e);
    
//    h = h2; // operator= is private
//    birdHouse h3 = h // copy constructor is private

    return 0;
}
