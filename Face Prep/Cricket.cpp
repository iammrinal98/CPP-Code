#include<iostream>
using namespace std;
int main()
{
 int a,b,c,d,e;
  float x,y,z,v,f,m;
  cin>>a;
 cin>>b;
  cin>>c;
  cin>>d;
  x=a/6;
  e=d%6;
  m=0.1*e;
  y=(d/6)+m;
  v=b/x;
  f=c/y;
   cout<<x;
  cout<<"\n"<<y;
printf("\n%.1f",f); 
  printf("\n%.1f",v); 
  if(v<=f)
    cout<<"\nEligible to Win";
  else
   cout<<"\nNot Eligible to Win";
  return 0;
}