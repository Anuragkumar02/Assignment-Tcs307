#include<iostream>
using namespace std;
class complex
{
public:
friend complex operator*(complex const &,complex const &);
complex(int r=0,int i=0)
{
real=r;
img=i;
}
void print()
{
cout<<real<<" + "<<img<<"i"<<endl;
}
private:
int real;
int img;
};
complex operator*(complex const &obj1,complex const &obj2)
{
complex result;
result.real=(obj1.real*obj2.real)-(obj1.img*obj2.img);
result.img=(obj1.img*obj2.real)+(obj1.real*obj2.img);
return result;
}


int main()
{
complex c1(2,3),c2(4,5);
complex c3=c1*c2;
c1.print();
c2.print();
c3.print();
}
