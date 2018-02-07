#include <iostream>
#include <vector>
using namespace std;

int sum(vector <int>& nums, int i){
	if(i==nums.size())
		return 0;
	else 
		return nums[i]+sum(nums, i+1);
}

int main(){
	vector <int> a;
	int x;
	cin>>x;
	for(int j=0; j<x; j++){
		int k;
		cin>>k;
		a.push_back(k);
	}
	cout<<sum(a, 0)<<endl;
	return 0;
}
