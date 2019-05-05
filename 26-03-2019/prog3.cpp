/*
	Program to arrange n-students in assending order of marks
	using dynamic memory allocation.
*/
#include<iostream>
#include<limits>
using namespace std;

struct student
{
	int rollNo;
	char name[20];
	float marks;
};

void swap(student *,student *);
void MBubbleSort(student *,int );

main()
{
	student *ptr;
	int size;
	cout<<"Enter the number of students\n";
	cin>>size;
	
	ptr = new student[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"\nEnter Roll ";
	    cin>>(ptr+i)->rollNo;
	    cin.ignore(numeric_limits<streamsize>::max(),'\n');
	    cout<<"Enter Name ";
	    cin.getline((ptr+i)->name,25);
		cout<<"Marks ";
		cin>>(ptr+i)->marks;
	}
	
	MBubbleSort(ptr,size);
	
	{
		cout<<"\nRoll No\t"<<"Marks\t"<<"Name\n";
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<(ptr+i)->rollNo<<"\t";
		cout<<(ptr+i)->marks<<"\t";
		cout<<(ptr+i)->name<<"\n";
	}
	delete []ptr;
}

void swap(student *x, student *y) //function for swapping
{
	student temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void MBubbleSort(student *ptr,int n) //modified bubble sort
{
	int i,j,flag=0;
	for(i=0;i<n-1 && flag==0;i++)
	{
		flag=1;
		for(j=0;j<n-1-i;j++)
		{
			if(((ptr+j)->marks) > ((ptr+j+1)->marks))
			{
				swap((ptr+j),(ptr+j+1));
				flag=0;
			}
		}
	}
}
