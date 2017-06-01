#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float a,b,c,d,e,f,g,h,i,j,k,l;
cout<< "enter the 1st cordinates";
cin>> a >> b ;
cout<< "enter the 2nd cordinates";
cin>> c >> d ;
cout<< "enter the 3rd cordinates";
cin>> e >> f ;
g=((a-c)*(a-c))-((b-d)*(b-d));
h=((c-e)*(c-e))-((d-f)*(d-f));
i=((e-a)*(e-a))-((e-a)*(e-a));
j=sqrt(g);
k=sqrt(h);
l=sqrt(i);
if(j==k && k==l)
cout<< "equilateral\n";
 else if(j==k||k==l||l==j)
cout<< "isosceles\n";
else
cout<<"scalene\n";
return 0;
}
