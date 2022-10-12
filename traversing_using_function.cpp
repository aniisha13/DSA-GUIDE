//program to traverse an element using function
#include<iostream>
using namespace std;
//function declaration
void fillarray(int a[],int size,int n);
void displayarray(int a[],int n);

//function definition

//function to fill array
void fillarray(int a[],int size,int n)
{
    if(n>size)
	{
		cout<<"elements exceeding size."<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			cout<<i<<": ";
			cin>>a[i];
		}
	cout<<"New array is: "<<endl;
	displayarray(a,n);  //calling displayarray
	}
}

//function to display array
void displayarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

int main()
{   
	int size=50,n;
	cout<<"size of an array is: "<<size<<endl;
	cout<<"enter number of elements: ";
	cin>>n;	
	int a[50];
	fillarray(a,size,n); //calling fillarray
	return 0;
}