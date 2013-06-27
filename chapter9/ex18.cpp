#include <iostream>
#include <string>

#define FIELD(a) char* a##_string; int a##_size; int a##_index;     

using namespace std;

class macro
{
    FIELD(big);
    FIELD(medium);
    FIELD(small);
public:
    macro(){ big_index = 1; medium_index = 2; small_index = 3; };
    virtual ~macro(){};
    char* lookup(int ind);

    int set(int ind, char* str, int len){
	switch(ind){
	case 1: big_string = str;
	    big_size = len;
	    break;
	case 2: medium_string = str;
	    medium_size = len;
	    break;
	case 3: small_string = str;
	    small_size = len;
	    break;
	default: return -1;
	}
    }
    
};

char* macro::lookup(int ind)
{
    switch(ind){
    case 1: return big_string;
    case 2: return medium_string;
    case 3: return small_string;
    default: return NULL;
    }
}

int main(int argc, char *argv[])
{
    macro m;
    string s1 = "Hello";
    string s2 = "Goodbye";
    string s3 = "Farewell";
    
    m.set(1, (char*)s1.c_str(), s1.length());
    m.set(2, (char*)s2.c_str(), s2.length());
    m.set(3, (char*)s3.c_str(), s3.length());
    
    cout << m.lookup(1) << endl;
    cout << m.lookup(2) << endl;
    cout << m.lookup(3) << endl;
        
    return 0;
}


