#include<iostream>
int main()
{
 int a;
  std::cin>>a;
  if(a%4==0){
    if(a%100==0){
      if(a%400==0)
        std::cout<<a<<" is a leap year";
      else
        std::cout<<a<<" is not a leap year";
    }
    else
      std::cout<<a<<" is a leap year";
  }
  else
    std::cout<<a<<" is not a leap year";
}