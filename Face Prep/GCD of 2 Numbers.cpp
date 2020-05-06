#include<iostream>
int main()
{
  int a,b,gcd;
  std::cin>>a;
  std::cin>>b;
  int small=0;
  if(a<b)
    small=a;
  else 
    small=b;
  while(small>=1){
    if(a%small==0 && b%small==0)
    {
      gcd=small;
      break;
    }
small--;
  }
  std::cout<<"G.C.D of "<<a<<" and "<<b<<" = "<<gcd;
}