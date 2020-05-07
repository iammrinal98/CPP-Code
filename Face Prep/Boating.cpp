#include<iostream>
int main()
{
  int a,b,c,d,e,f;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
  d=b*75;
  e=c*30;
  f=d+e;
  if(a>f)
    std::cout<<"Boat is stable";
  else
    std::cout<<"Boat will drow";
  
}