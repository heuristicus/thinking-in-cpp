#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Text
{
public:
    string data;
    Text();
    Text(string fname);
    ~Text();
    string contents();
};

Text::Text(){}

Text::Text(string fname)
{
    ifstream in(fname.c_str());
    string line;
    while(getline(in, line)){
	data += line;
    }
    
    in.close();
}

Text::~Text()
{ cout << "Text object destroyed." << endl;}

string Text::contents()
{
    return data;
}

int main(int argc, char *argv[])
{
    Text t("../testfile.txt");
    cout << t.contents() << endl;
    return 0;
}
