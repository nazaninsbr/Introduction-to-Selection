#include <iostream>
using namespace std;
int sum(int n)
{
	if(n==1)
		return 1;
	return n+sum(n-1);
}
int main()
{
	int n;
	cout<<"Please enter a number: ";
	cin>>n;
	cout<<"The sum of 1 to "<<n<<" is: "<<sum(n)<<endl;
	return 0;
}