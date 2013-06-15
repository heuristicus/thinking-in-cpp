#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    vector<float> nums;
    
    for (int i = 0; i < 25; ++i){
	float rand = (float)std::rand()/((float)RAND_MAX/20);
	nums.push_back(rand);
    }
    
    cout << "Before squaring" << endl;
    for (int i = 0; i < nums.size(); i++)
	cout << nums[i] << ", ";
    
    cout << endl;
    

    for (int i = 0; i < nums.size(); ++i){
	nums[i] = nums[i] * nums[i];
    }

    cout << "After squaring" << endl;
    for (int i = 0; i < nums.size(); i++)
	cout << nums[i] << ", ";
    
    cout << endl;
    
    return 0;
}
