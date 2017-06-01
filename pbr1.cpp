#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the number:::::";
cin>>n;
for(int i=0; i<n; i++)
{
for(int j=(n-i); j>=2; j--)
{cout<<"*";}
for(int k=0; k<=i; k++)
{cout<<k+1;}
cout<<"\n";
}
return 0;
}
