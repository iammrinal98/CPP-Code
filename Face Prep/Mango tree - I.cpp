#include<iostream>
int main(){
  int a,b,c,d,e,f,g;
std::cin>>a;
std::cin>>b;
std::cin>>c;
d=c%b;
  e=b*2;
  
if(e==c)
  std::cout<<"Yes";
else if(d==1)
  std::cout<<"Yes";
  else if(c<=b)
    std::cout<<"Yes";
  else
    std::cout<<"No";
}