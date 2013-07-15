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

void (fvec::*addp)(void(*mp)()) = &fvec::add;
void (fvec::*remp)() = &fvec::remove;
void (fvec::*runp)() = &fvec::run;

int main() {
    fvec v;
    (v.*addp)(a);
    (v.*addp)(b);
    (v.*addp)(c);
    (v.*addp)(d);
    (v.*addp)(e);
    (v.*addp)(f);
    (v.*addp)(g);
    (v.*runp)();
    (v.*remp)();
    (v.*remp)();
    (v.*runp)();
}
