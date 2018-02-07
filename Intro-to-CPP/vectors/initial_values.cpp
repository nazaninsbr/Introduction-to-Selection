#include <iostream>
#include <vector>
using namespace std; 

int main(){
	vector <int> numbers;
	numbers.push_back(3);
	vector <int> nums (4);
	nums[0] = 0;
	nums[1] = 1;
	nums[2] = 2;
	nums[3] = 3;
	for(int i=0; i<4; i++){
		cout<<nums[i]<<endl;
	}
	return 0;
}
