#include "stack.h"
#include <iostream>

using namespace std;

Stack::Link::Link(void* dat, Link* nxt) {
    data = dat;
    next = nxt;
}

Stack::Link::~Link() { }

Stack::Stack() { head = 0; }

void Stack::push(void* dat) {
    head = new Link(dat,head);
}

void* Stack::peek() {
    if (head == 0){
	cout << "Stack empty" << endl;
	return 0;
    }
    return head->data;
}

void* Stack::pop() {
    if(head == 0) return 0;
    void* result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;    return result;
}

Stack::~Stack() {
    if (head != 0){
	cout << "Stack empty!" << endl;
    }
}
