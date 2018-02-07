#include <iostream>
using namespace std;
int min_of_two(int a, int b)
{
	if(a<b)
		return a;
	return b;
}
int main()
{
	int a, b, c;
	cout<<"Please enter 3 numbers: ";
	cin>>a>>b>>c;
	cout<<"\nThe minimum is: "<<min_of_two(min_of_two(a, b), c)<<'\n';
	return 0;
}