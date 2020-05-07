#include<iostream>
int main(){
  int a,b,c,d,e;
std::cin>>a;
std::cin>>b;
std::cin>>c;
d=b*2;
e=b*(b-1);
if(d==c || e==c)
  std::cout<<"It is a mango tree";
else
  std::cout<<"It is not a mango tree";
}