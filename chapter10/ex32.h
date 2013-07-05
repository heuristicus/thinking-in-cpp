class mirror
{
public:
    mirror() : b(true), m(0){};
    mirror(mirror* mp) : b(false), m(mp){};
    virtual ~mirror(){};
    bool test(){ m == 0 ? b : m->test(); };
private:
    mirror* m;
    bool b;
};
