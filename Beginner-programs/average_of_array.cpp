#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, x, average=0;
	vector <int> array;
	cout<<"Please enter the number of your inputs: ";
	cin>>n;
	cout<<"Please enter your numbers: ";
	for(int i=0; i<n; i++)
	{
		cin>>x;
		average +=x;
	}
	average = average/n;
	cout<<"The average is: "<<average<<endl;
	return 0;
}