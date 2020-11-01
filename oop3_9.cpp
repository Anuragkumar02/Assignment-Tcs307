#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num,i,j;
cout<<"Enter the limit: ";
cin>>num;
int prime[num+1];
for(i=2;i<=num;i++)
prime[i]=i;

i=2;
while((i*i)<=num)
{
if(prime[i]!=0)
{
for(j=2;j<num;j++)
{
if(prime[i]*j>num)
break;
else
prime[prime[i]*j]=0;
}
}
i++;
}
for(i=2;i<=num;i++)
{
if(prime[i]!=0)
cout<<prime[i]<<" ";
}
return 0;
}

