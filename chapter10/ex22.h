namespace ns2
{
    class classy
    {
    public:
	classy(int vval = 0) : val(vval) {};
	virtual ~classy(){};
	void print(){ std::cout << "ns2 " << val << std::endl; };
    private:
	int val;
    };
}
