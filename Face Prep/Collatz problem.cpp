#include<iostream>
int main()
{
  int i=0,n,f;
  std::cin>>n;
  std::cout<<n;
  while(n>1)
  {
    if(n%2==0)
      f=n/2;
    else
      f=3*n+1;
    n=f;
    std::cout<<"\n"<<n;
    i++;
  }
  std::cout<<"\n"<<i;
    
}