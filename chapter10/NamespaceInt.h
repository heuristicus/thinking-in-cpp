#ifndef NAMESPACEINT_H
#define NAMESPACEINT_H
namespace Int {
    enum sign { positive, negative };
    class Integer {
	int i;
	sign s;
    public:
    Integer(int ii = 0)
	: i(ii),
	    s(i >= 0 ? positive : negative)
	    {}
	sign getSign() const { return s; }
	void setSign(sign sgn) { s = sgn; }
// ...
    };
}
#endif // NAMESPACEINT_H
