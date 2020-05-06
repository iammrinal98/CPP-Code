#include<iostream>

int main()
{
 int n,sum=0,i,n1;
  std::cin>>n;
  for(i=0;sum<n;i++){
    std::cin>>n1;
    sum=sum+n1;
}
  std::cout<<"The number of turns is "<<i;
}