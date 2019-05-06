/*Count the number of characters in a word using a pointer to a string*/
#include<iostream>
using namespace std;
main()
{
    char S[20];
    char *ptr=S;
    int count=0;
   
    cout<<"Enter a string\n";
    cin>>S;
  
    while(*ptr != '\0')
    {
      count ++;
      ptr++;
    }
  
    cout<<"string length :"<<count<<endl;
}
