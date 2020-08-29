#include<iostream>
#include <bits/stdc++.h> 
#include<cstring>
using namespace std;
int main()
{
    char s[100],s1[100];
	cout<<"enter a string";
	cin.getline(s,100);
	cout<<s<<endl;
	strcpy(s1,s);
	strrev(s);
	if(strcmp(s,s1)==0)
	cout<<"palindrome";
	else
	cout<<"not a palindrome";
	
}
