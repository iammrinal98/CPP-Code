#include<iostream>
using namespace std;
int main()
{
  int a;
  float b,m,n;
  cin>>a;
  cin>>b;
  m=b*0.5;
  n=b*2;
  if(a==2)
    printf("%.2f",b+m);
  else if(a==3)
    printf("%.2f",n);
  else
    cout<<"Number of items is more";
    
}