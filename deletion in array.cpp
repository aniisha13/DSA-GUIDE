#include<iostream>
using namespace std;
void fillarray(int a[],int n,int size);
void displayarray(int a[],int n);
void deletion(int pos,int a[],int &n);

void fillarray(int a[],int n,int size)
{
	if(n==size)
	{
		cout<<"elements exceeding size";
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			cout<<i<<": ";
			cin>>a[i];
		}
	}
}

void displayarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void deletion(int pos,int a[],int &n)
{
	for(int i=pos-1;i<=n-1;i++)
	{
		a[i]=a[i+1];
		
	}
	n--;
}

int main()
{
	int size=50;
	int n;
	cout<<"size of an array is: "<<size<<endl;
	cout<<"enter number of elements: ";
	cin>>n;
	int a[50];
	fillarray(a,n,size);
	
	cout<<endl;
	cout<<"given array is: ";
	displayarray(a,n);
	int pos;
	cout<<endl;
	cout<<"enter the position from where the item is to be deleted: ";
	cin>>pos;
	deletion(pos,a,n);
	cout<<endl;
	cout<<"the new array is: ";
	displayarray(a,n);
	return 0;
	
}