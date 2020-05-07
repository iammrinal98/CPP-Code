#include<iostream>
int main()
{
  int a,b,c,d,e,f,g,h,i,x,y,z;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
  std::cin>>d;
  std::cin>>e;
  std::cin>>f;
  std::cin>>g;
  std::cin>>h;
  std::cin>>i;
  x=(a-(a*b*0.01))+c;
  std::cout<<"In Flipkart Rs."<<x;
  y=(d-(d*e*0.01))+f;
   std::cout<<"\nIn Snapdeal Rs."<<y;
  z=(g-(g*h*0.01))+i;
   std::cout<<"\nIn Amazon Rs."<<z;
  if(x<=y && x<=z)
    std::cout<<"\nHe will prefer Flipkart";
  else if(y<x && y<z)
    std::cout<<"\nHe will prefer Snapdeal";
  else
    std::cout<<"\nHe will prefer Amazon";
    
}