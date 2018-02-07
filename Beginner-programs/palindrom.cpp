#include <iostream>
#include <string>
using namespace std;
bool is_it_palindrom(string word)
{
	int border, len, j;
	if(word.size()%2==0)
		len=0;
	else 
		len=1;
	border=(word.size())/2;
	j=word.size()-1;
	for(int i=0; i<border; i++)
	{
		if(word[i]!=word[j])
			return false;
		j--;
	}
	return true;
}
int main()
{
	string word;
	cin>>word;
	if(is_it_palindrom(word))
		cout<<"True"<<'\n';
	else 
		cout<<"False"<<'\n';
}