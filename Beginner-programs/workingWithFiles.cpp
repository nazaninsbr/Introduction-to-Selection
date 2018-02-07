#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
using namespace std;
void createFile();
int writeToFile();
int readFromFile();
int deleteFile();

void createFile()
{
	ofstream o("./test.txt");
}
int writeToFile()
{
	string massage;
	ofstream myfile;
	myfile.open("./test.txt");
	if(myfile.is_open())
	{
		cout<<"Please write what you want to write to your file here, you can use enter and space, the file will close when you write EXIT in an empty line.";
		do{
			cin>>massage;
			myfile<<massage<<'\n';
		}while(massage != "EXIT");
		myfile.close();
		return 1;
	}
  	return 0;
}
int readFromFile()
{
	string line;
	ifstream myfile;
	myfile.open("./test.txt");
	if(myfile.is_open())
	{
		 while ( getline (myfile,line) )
		 {
		 	cout<<line<<'\n';
		 }
		 myfile.close();
		 return 1;
	}
	return 0;
}
int deleteFile()
{
	if(remove("./test.txt"))
		return 0;
	else 
		return 1;
}
int main()
{
	createFile();
	cout<<writeToFile()<<endl;
	cout<<readFromFile()<<endl;
	cout<<deleteFile()<<endl;
	return 0;
}