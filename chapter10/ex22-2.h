namespace ns1
{
    class classy
    {
    public:
	classy(int vval = 0) : val(vval) {};
	virtual ~classy(){};
	void print(){ std::cout << "ns1 " << val << std::endl; };
    private:
	int val;
    };
}
