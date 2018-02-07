#include <iostream>
using namespace std;
int factorial(int n){
	if(n<=1)
		return 1;
	else
		return n*factorial(n-1);

}
int main()
{
	int in_num;
	cin>>in_num;
	cout<<factorial(in_num)<<endl;
	return 0;
}