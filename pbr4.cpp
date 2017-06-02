#include<iostream>
using namespace std;
int main()
{
int n,d;
cout<<"Enter the number:::::";
cin>>n;
for(int i=1; i<=n; i++)
{d=n%i;
if(d==0)
cout<< i <<"\t";
}
return 0;
}
