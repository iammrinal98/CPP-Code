#include<iostream>

int main()
{
 int n,i,a,sum=0,pos;
  std::cin>>n;
  std::cin>>a;
  int arr[n];
  for(i=0;i<n;i++)
  {
std::cin>>arr[i];
}
  for(i=0;i<n;i++){
    sum=sum+arr[i];
    pos=i+1;
  }
  if(sum<=a)
    std::cout<<"YES";
  else
    std::cout<<"NO";
}