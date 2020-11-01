#include<iostream>
#include<cmath>
using namespace std;
inline float sphereVolume(float radius)
{
return 4.0/3.0*3.14159*pow(radius,3);
}
int main()
{
float radius;
cout<<"Enter the radius of sphere: "<<endl;
cin>>radius;
cout<<"Volume of sphere is = "<<sphereVolume(radius)<<endl;
return 0;
}
