#include<iostream>
#include<string>
using namespace std;
bool ispalindrome(string s)
{
if(s.size()<=1)
return true;
else
if(s.at(0)==s.at(s.size()-1))
return ispalindrome(s.substr(1,s.size()-2));
return false;
}
int main()
{
string str;
cout<<"Enter the string : "<<endl;
getline(cin,str);
string s = str;
cout<<boolalpha<<"\""<<s<<"\" is a palindrome: "<<ispalindrome(s)<<endl;
return 0;
}
