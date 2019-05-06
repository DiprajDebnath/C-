/*
 * C++ program to count frequency of each element of array
 */
#include<iostream>
using namespace std;
main()
{
    int arr[20],temp[20],size,i,j,count;

    cout<<"Enter the size of array"<<endl;
    cin>>size;
  
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
        temp[i]=-1; //initially -1
    }

    for(i=0;i<size;i++){

        count=1;
        
        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){

                count++;
                temp[j]=0; //to mark the position of same numbers 
            }
        }

        //to store the count
        if(temp[i]!=0){
            temp[i]=count;
        }
    }

    for(i=0;i<size;i++){
        if(temp[i]!=0){
             cout<<arr[i]<<":"<<temp[i]<<endl;
        }
    }
}





/*
 * C++ program to count frequency/numer of occurance of each element of array 
 * Using function
 */
 /*
#include<iostream>
using namespace std;

void occurance(int arr[], int temp[], int size)
{
	int i,j,count;
	for(i=0;i<size;i++){

        count=1;
        
        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){

                count++;
                temp[j]=0; //to mark the position of same numbers 
            }
        }

        //to store the count
        if(temp[i]!=0){
            temp[i]=count;
        }
    }

    for(i=0;i<size;i++){
        if(temp[i]!=0){
             cout<<arr[i]<<":"<<temp[i]<<endl;
        }
    }
}

main()
{
    int arr[20],temp[20],size,i;

    cout<<"Enter the size of array"<<endl;
    cin>>size;
  
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
        temp[i]=-1; //initially -1
    }

    occurance(arr,temp,size);
}
*/

/*
 * C++ program to count frequency/numer of occurance of each element of array 
 * Using recursion
 */
/*
#include<iostream>
using namespace std;

void occurance(int arr[], int temp[], int size)
{
	static int i=0;
	int j,count;
	
	if(i<size)
    {
        count=1;
        
        for(j=i+1;j<size;j++){

            if(arr[i]==arr[j]){

                count++;
                temp[j]=0; //to mark the position of same numbers 
            }
        }

        //to store the count
        if(temp[i]!=0){
            temp[i]=count;
        }
        i++;
        occurance(arr,temp,size);
    }

    else
    {
    	for(i=0;i<size;i++){
        if(temp[i]!=0){
             cout<<arr[i]<<":"<<temp[i]<<endl;
           }
        }
	}
}

main()
{
    int arr[20],temp[20],size,i;

    cout<<"Enter the size of array"<<endl;
    cin>>size;
  
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
        temp[i]=-1; //initially -1
    }

    occurance(arr,temp,size);
}
*/
