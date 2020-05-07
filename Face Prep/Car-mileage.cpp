#include<iostream>

int main()
{
  float a,m;
  int b,c;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
  m=a*b;
  if(m>c)
    std::cout<<"Can reach";
  else
    std::cout<<"Cannot reach";
}