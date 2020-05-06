#include<iostream>
int main()
{
  int n,temp,d,sum=0;
  std::cin>>n;
  temp=n;
  while(temp>0){
    d=temp%10;
    sum=sum+d;
    temp=temp/10;
  }
  if(n%sum==0)
    std::cout<<"Harshad Number";
  else
    std::cout<<"Not Harshad Number";
}