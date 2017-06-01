#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,x,d;
cout<< "Enter a,b,c";
cin>>a>>b>>c;
d=(b*b)-4*a*c;
if(d>=0)
{
x=((-b)+sqrt(d))/(2*a);
cout<< x <<endl;
}
return 0;
}
