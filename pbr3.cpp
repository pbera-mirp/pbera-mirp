#include<iostream>
using namespace std;
int main()
{
int n,f;
cout<<"Enter the number:::::";
cin>>n;
for(int i=2; i<=(n/2); i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
cout<<"The number is prime";
else
cout<<"The number is not prime";
return 0;
}
