#include <iostream>
using namespace std;
int hanoi_moves(int n)
{
	if(n==1)
		return 1;
	return 1+ 2*hanoi_moves(n-1);
}
int main()
{
	int n;
	cout<<"Please enter the number of disks: ";
	cin>>n;
	cout<<"\nThe number of moves needed is "<<hanoi_moves(n)<<".\n";
	return 0;
}