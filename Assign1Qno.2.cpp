#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,temp;
	cout<<"enter the size:";
	cin>>n;
	cout<<"enter the elements of array\n";
	for(i=0;i<n;i++)
	{
	cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"second largest number is:"<<a[n-2]<<" and second smallest number:"<<a[1];
	return 0;
}
