#include <iostream>

using namespace std;

struct rec
{
    int value;
    rec* next;
};

void make_list(rec* head, int len)
{
    rec* next_elem;
    rec* temp = head;
    
    for (int i = 0; i <= len; ++i)
    {
	next_elem = new rec;
	next_elem->value = i + 1;
	temp->next = next_elem;
	temp = temp->next;
    }
    temp->value = 0;
}

void print_list(rec* head)
{
    rec* tmp = head; 
    while(tmp->value != 0){
	cout << "value: " << tmp->value
	     << " pointer: " << &tmp << endl;
	tmp = tmp->next;
    }
}

int main(int argc, char *argv[])
{
    rec lst;
    lst.value = 1000;

    make_list(&lst, 10);
    print_list(&lst);
    
    return 0;
}
