#include <iostream>

using namespace std;

class test 
{
public:
    int pi;
    void pf();
private:
    int pri;
    void prf();
protected:
    int proi;
    void prof();
};


void test::pf()
{
    cout << "public function" << endl;
}

void test::prf()
{
    cout << "private function" << endl;
}

void test::prof()
{
    cout << "protected function" << endl;
}

int main(int argc, char *argv[])
{
    test t;
    
    t.pi = 1;
    t.pf();
    
    t.pri = 2;
    t.prf();
    
    t.proi = 3;
    t.prof();
    
    return 0;
}
