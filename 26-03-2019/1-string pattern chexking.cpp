/*string pattern checking*/
#include<iostream>
using namespace std;

int stringLen(string str)
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

int locate(string S,string pattern)
{
	int m, n;
	int i, j;

	m = stringLen(S);
	n = stringLen(pattern);

	for(i=0;i<m-n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(S[j+i] != pattern[j])
			{
				break;
			}
		}

		if(j==n)
			return i;
	}
	
	return -1;
}

main()
{
	string S, pattern;
    
    cout<<"Enter the string \n";
    cin>>S;

    cout<<"Enter the pattern \n";
    cin>>pattern;

    cout<<locate(S, pattern);
}
