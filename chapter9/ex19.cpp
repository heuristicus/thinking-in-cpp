#include <iostream>
#include <string>

#define FIELD(a) private: char* a##_string; int a##_size; \
                 public: char* a##_get(){ return a##_string; }\
                         void a##_set(char* str, int size){ a##_string = str; a##_size = size; }
    

using namespace std;

class macro
{
    FIELD(big);
    FIELD(medium);
    FIELD(small);
public:
    macro(){};
    virtual ~macro(){};
};

int main(int argc, char *argv[])
{
    macro m;
    string s1 = "Hello";
    string s2 = "Goodbye";
    string s3 = "Farewell";

    m.big_set((char*)s1.c_str(), s1.length());
    m.medium_set((char*)s2.c_str(), s2.length());
    m.small_set((char*)s3.c_str(), s2.length());
    cout << m.big_get() << endl;
    cout << m.medium_get() << endl;
    cout << m.small_get() << endl;

    return 0;
}
