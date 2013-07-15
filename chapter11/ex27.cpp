#include <iostream>
#include <vector>

using namespace std;
// A macro to define dummy functions:
#define DF(N) void N() {				\
	cout << "function " #N " called..." << endl; }

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = { a, b, c, d, e, f, g };

class fvec
{
public:
    fvec(){};
    virtual ~fvec(){};
    void add(void(*fp)()){funcVector.push_back(fp); };
    void remove(){ funcVector.pop_back(); };
    void run();
private:
    vector<void(*)()> funcVector;
};

void fvec::run()
{
    for (int i = 0; i < funcVector.size(); ++i)
	(*funcVector[i])();

}

int main() {
    fvec v;
    v.add(a);
    v.add(b);
    v.add(c);
    v.add(d);
    v.add(e);
    v.add(f);
    v.add(g);
    v.run();
    v.remove();
    v.remove();
    v.run();
}
