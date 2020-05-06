#include<iostream>
#include<cmath>
int main()
{
  int a,n,r;
  std::cin>>a;
  std::cin>>n;
  std::cout<<"Enter the value of a";
  std::cout<<"\nEnter the value of n";
  r=pow(a,n);
  std::cout<<"\nThe value of "<<a<<" power "<<n<<" is "<<r;
}