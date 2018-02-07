#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> numbers;
	int n, sum, x;
	sum = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		sum +=x;
		numbers.push_back(x);
	}
	cout<<"the average is: "<<sum/n<<endl;
	return 0;

}
