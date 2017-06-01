#include<iostream>
using namespace std;
int main()
{
   int n,s,t,u,v,w;
   cout<<"enter the number:";
   cin>> n;
   s=n%1000;
   t=s/100;
   u=(s%100)/10;
   v=s%10;
   w=t+u+v;
   cout<<"the sum is" <<w<<endl;
   return 0;
}

