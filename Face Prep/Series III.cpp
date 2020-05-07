#include<iostream>
int main(){
  int n,i,a=6,b=5;
  std::cin>>n;
  
  for(i=1;i<=n;i++){
    std::cout<<a<<" ";
    a=a+b;
    b=b+5;
  }
}