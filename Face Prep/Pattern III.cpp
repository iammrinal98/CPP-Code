#include<iostream>
int main(){
  int n,i,j;
  int num=1;
  std::cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<i;j++)
      std::cout<<num<<"*";
    std::cout<<num;
    num++;
     std::cout<<"\n";
  }
  num--;
  for(i=n;i>0;i--){
    for(j=1;j<i;j++)
      std::cout<<num<<"*";
    std::cout<<num;
    num--;
     std::cout<<"\n";
  }
      
}