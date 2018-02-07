#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	cout<<"Please enter your word: ";
	cin>>word;
	cout<<"\n";
	for(int i=word.length()-1; i>=0; i--)
		cout<<word[i];
	cout<<endl;
	return 0;
}