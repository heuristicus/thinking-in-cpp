#include "video.h"
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
    video v1, v2, v3;
    v1.set_name("v1");
    v1.set_price(1.0f);
    
    v2.set_name("v2");
    v2.set_price(2.0f);
    
    v3.set_name("v3");
    v3.set_price(3.0f);

    Stack s;
    s.initialize();
    s.push((void*)&v1);
    s.push((void*)&v2);
    s.push((void*)&v3);
    
    void* elem;
    while((elem = s.pop())){
	((video*)elem)->print();
    }
    
    return 0;
}
