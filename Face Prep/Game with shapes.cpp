#include<iostream>

int main()
{
 int r,x;
  std::cin>>r;
  std::cin>>x;
  if(2*r<=x)
    std::cout<<"circle can be inside a square";
  else
    std::cout<<"circle cannot be inside a square";
}