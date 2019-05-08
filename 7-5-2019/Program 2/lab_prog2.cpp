#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

/*Functions prototypes*/
void options();
void upperCase();
void lowerCase();
void lineCount();
void wordCount();
void characterCount();
void spaceCount();
void digitCount();

main()
{
	cout<<"***WELCOME***"<<endl;
	options();
}

/*this function contains the options*/
void options()
{
	int ch;
	
	while(1)
	{
		cout<<"\n__OPTIONS__\n";
	    cout<<"1. Count upper case characters\n"
	        <<"2. Count oower case characters\n"
	        <<"3. Count lines\n"
	        <<"4. Count words\n"
	        <<"5. Count characters\n"
	        <<"6. Count white space\n"
	        <<"7. Count digits\n"
			<<"0. Exit\n";
	    cout<<"\nEnter your choice : ";
	    cin>>ch;
	    switch(ch)
	    {
	    	case 1:upperCase();
	    		   break;
	    		   
	    	case 2:lowerCase();
	    		   break;
	    		   
	    	case 3:lineCount();
	    		   break;
	    		   
	    	case 4:wordCount();
	    		   break;
	    		   
	    	case 5:characterCount();
	    		   break;
	    		   
	    	case 6:spaceCount();
	    		   break;
	    		   
	    	case 7:digitCount();
	    		   break;
	    		   
	    	case 0:cout<<"Bye :)";
	    	       exit(0);
	    	       
	    	default:cout<<"Sorry option not available :(\n";	   
		}
	}
}

/*Function to count upper case*/
void upperCase()
{
    ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch >= 'A' && ch <= 'Z')
			count++;
	}
	
	cout<<"Number of upper case character in file are " << count<<endl;
	fin.close();
	options();
}

/*Function to count lower case*/
void lowerCase()
{
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch >= 'a' && ch <= 'z')
			count++;
		//!!!counts one extra
	}
	
	cout<<"Number of lower case character in file are " << count-1<<endl;
	fin.close();
	options();
}

/*Function to count number of words in the file*/
void wordCount()
{
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	//char word[20];
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		//fin >> word; count++;//also count numbers
		fin.get(ch);
		if(ch == ' ' || ch == '\n'){
			count++;
		}
	}
	
	cout<<"Number of words in file are " << count<<endl;
	fin.close();
	options();
}

/*Function to number of characters*/
void characterCount()
{
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		count++;
		//!!! counts everything space, newline, etc
	}
	
	cout<<"Number of characters in file are " << count-1<<endl;
	fin.close();
	options();
}

/*Function to count number of lines*/
void lineCount()
{
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char line[50];
	int count=0;
	
	while(!fin.eof())
	{
		fin.getline(line,50);
		count++;
	}
	
	cout<<"Number of lines in file are " << count<<endl;
	fin.close();
	options();
}

/*Function to count white space*/
void spaceCount()
{
	
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch ==' ')
			count++;
	}
	
	cout<<"Number of white space in file are " << count<<endl;
	fin.close();
	options();
}

/*Function to count digits*/
void digitCount()
{
		
	ifstream fin;
	fin.open("OurFile.txt");//opens our existing text file in read mode
	
	char ch;
	int count=0;
	
	while(!fin.eof())
	{
		fin.get(ch);
		if(ch >= '0' && ch <= '9')
		{
			count++;
		}
	}
	
	cout<<"Number of digits in file are " << count<<endl;
	fin.close();
	options();
}


