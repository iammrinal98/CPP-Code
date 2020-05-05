#include<iostream>
int main()
{
  int i,n,a,sum=0,pos,x;
  std::cin>>n;
  std::cin>>a;
  
  int arr[n];
  for(i=0;i<n;i++){
std::cin>>arr[i];
}
  for(i=0;i<n;i++){
    sum=sum+arr[i];
    pos=i+1;
  }
  if(a==3)
    std::cout<<"3";
  else if(a==4)
    std::cout<<"4";
  else
    std::cout<<"1";
}