#include "ex11-mem.h"
#include <cstring>

using namespace std;

Mem::Mem(int sz) {
    mem = 0;
    size = 0;
    ensureMinSize(sz);
    moved(mem);
}

Mem::~Mem() { delete []mem; }

int Mem::msize() { return size; }

void Mem::ensureMinSize(int minSize) {
    if(size < minSize) {
	byte* newmem = new byte[minSize];
	memset(newmem + size, 0, minSize - size);
	memcpy(newmem, mem, size);
	delete []mem;
	mem = newmem;
	size = minSize;
    }
}

byte* Mem::pointer(int minSize) {
    ensureMinSize(minSize);
    return mem;
}

bool Mem::moved(byte* ptr)
{
    static byte* pmem;
    if (ptr != pmem){
	pmem = ptr;
	return true;
    }

    return false;
}
