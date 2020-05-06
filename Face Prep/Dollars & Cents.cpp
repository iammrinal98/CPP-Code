#include<iostream>
int main()
{
 int a,b,c,d,e,f,x,y;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
  std::cin>>d;
  e=(a+c);
  x=b+d;
  if(x>=100){
    f=x/100;
  y=e+f;
  std::cout<<y;
    std::cout<<"\n"<<x-100;
  }
  else{
    std::cout<<e;
    std::cout<<"\n"<<x;
  }
  
}