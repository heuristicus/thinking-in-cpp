#include "ex16-stash.h"
#include <iostream>
#include <cassert>

using namespace std;

// Quantity of elements to add
// when increasing storage:
const int increment = 100;

void Stash::initialize(int sz) {
    size = sz;
    quantity = 0;
    storage = new vector<char>;
    next = 0;
}

int Stash::add(const void* element) {
    if(next >= quantity) // Enough space left?
	inflate(increment);
// Copy element into storage,
// starting at next empty space:
    int startBytes = next * size;
    vector<char>* e = (vector<char>*)element;
    for(int i = 0; i < size; i++)
	storage[startBytes + i] = e[i];
    next++;
    return(next - 1); // Index number
}

void* Stash::fetch(int index) {
// Check index boundaries:
    assert(0 <= index);
    if(index >= next)
	return 0; // To indicate the end
// Produce pointer to desired element:
    return &(storage[index * size]);
}

int Stash::count() {
    return next; // Number of elements in CStash
}

void Stash::inflate(int increase) {
    assert(increase > 0);
    int newQuantity = quantity + increase;
    int newBytes = newQuantity * size;
    int oldBytes = quantity * size;
    vector<char>* b = new vector<char>[newBytes];
    for(int i = 0; i < oldBytes; i++)
	b[i] = storage[i]; // Copy old to new
    delete []storage; // Old storage
    storage = b; // Point to new memory
    quantity = newQuantity;
}

void Stash::cleanup() {
    if(storage != 0) {
	cout << "freeing storage" << endl;
	delete []storage;
    }
}
