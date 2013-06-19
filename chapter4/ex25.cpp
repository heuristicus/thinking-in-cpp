#include <iostream>

using namespace std;

struct rec
{
    int value;
    rec* next;
    void make_list(int len);
    void print_list();
};

void rec::make_list(int len)
{
    rec* next_elem;
    rec* temp = this;
    
    for (int i = 0; i <= len; ++i)
    {
	next_elem = new rec;
	next_elem->value = i + 1;
	temp->next = next_elem;
	temp = temp->next;
    }
    temp->value = 0;
}

void rec::print_list()
{
    rec* tmp = this; 
    while(tmp->value != 0){
	cout << "value: " << tmp->value
	     << " pointer: " << &tmp->next << endl;
	tmp = tmp->next;
    }
}

int main(int argc, char *argv[])
{
    rec lst;
    lst.value = 1000;

    lst.make_list(10);
    lst.print_list();
    
    return 0;
}
