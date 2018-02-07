#include <iostream>
using namespace std;
void print_series(int number)
{
	int prev=0, curr=1, temp;
	for(int i=0; i<number; i++)
	{
		cout<<curr<<" ";
		temp = curr;
		curr += prev;
		prev = temp;
	}
}
int main()
{
	int number;
	cout<<"Till which number would you like to print the series?";
	cin>>number;
	print_series(number);
	return 0;
}