#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ifstream fin;
	fin.open("out.txt");//opens a existing file in read mode
	
	ofstream fout;
	fout.open("copy.txt");//if file doesn't exist then creates one
	
	char ch;
	char tem;
	
	while(!fin.eof())
	{
		fin.get(ch);//gets one character at a time from file main.txt
		
		if(tem == ' ' && ch == ' ')
			continue;//fout<<'\n';
		else
		{
			cout<<ch;
			fout.put(ch);//puts one character at a time in file copy.txt
			tem=ch;
		}
	}
	
	fin.close();
	fout.close();
}
