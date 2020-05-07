#include<iostream>

int main()
{
  int a;
  int b;
  std::cin>>a;
  std::cin>>b;
  if(a>13 && b==10)
    std::cout<<"$8.00";
    else if(a>13 && b==13)
    std::cout<<"$5.00";
   else if(a<=13 && b==10 )
    std::cout<<"$4.00";
   else
    std::cout<<"$2.00";
  
}