#include<iostream>
int main()
{
  int a,b;
  std::cin>>a;
  std::cin>>b;
  if(b<a){
    a=100-a;
    std::cout<<b+a;
  }
  else 
    std::cout<<(b-a);
  
  
}