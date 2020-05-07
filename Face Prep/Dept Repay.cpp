#include<iostream>
int main()
{
 int p,r,t;
  float c,d,a,b,x;
  std::cin>>p;
  std::cin>>r;
  std::cin>>t;
  a=(p*r*t)/100;
  b=p+a;
  x=b-p;
  c=x*0.02;
  d=b-c;
 
  
  
  std::cout<<a;
  std::cout<<"\n"<<b;
  std::cout<<"\n"<<c;
  std::cout<<"\n"<<d;
  
}