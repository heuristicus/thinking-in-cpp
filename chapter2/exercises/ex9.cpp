#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    vector<float> nums1;
    vector<float> nums2;
    vector<float> nums3;
    
    for (int i = 0; i < 25; ++i){
	float rand1 = (float)std::rand()/((float)RAND_MAX/20);
	float rand2 = (float)std::rand()/((float)RAND_MAX/20);

	nums1.push_back(rand1);
	nums2.push_back(rand2);
    }

    for (int i = 0; i < nums1.size(); i++)
	nums3.push_back(nums1[i] + nums2[i]);
    

    cout << "nums 1:" << endl;
    for (int i = 0; i < nums1.size(); i++)
	cout << nums1[i] << ", ";

    cout << endl << "nums 2:" << endl;
    for (int i = 0; i < nums2.size(); i++)
	cout << nums2[i] << ", ";

    cout << endl << "nums 3:" << endl;
    for (int i = 0; i < nums3.size(); i++)
	cout << nums3[i] << ", ";

    cout << endl;
    
    return 0;
}
