#include<iostream>
int main()
{
int n,f,l;
  std::cin>>n;
  l=n%10;
  f=n/1000;
  std::cout<<f+l;
}