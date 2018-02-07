#include <iostream>
#include <vector>
using namespace std;
int max_subsequence(vector <int> array)
{
	int sum=0, max=0;
	for(int i=0; i<array.size(); i++)
	{
		for(int j=i; j<array.size(); j++)
		{
			sum += array[j];
			if(sum>max)
				max=sum;
		}
		sum=0;
	}
	return max;
}
int main()
{
	int n, inp;
	vector <int> array; 
	cout<<"Enter the lenght of the sequence: ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>inp;
		array.push_back(inp);
	}
	cout<<"\nThe maximum subarray is: "<<max_subsequence(array)<<endl;
}