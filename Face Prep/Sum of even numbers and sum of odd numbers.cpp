#include<iostream>
int main()
{
 int i,n,odd=0,even=0,sum=0,sum1=0;
  std::cin>>n;
  int a[n];
  for(i=0;i<n;i++){
std::cin>>a[i];
}
  for(i=0;i<n;i++){
if(a[i]%2==0){
  even++;
  sum=sum+a[i];
}
}
  for(i=0;i<n;i++){
if(a[i]%2!=0){
  odd++;
  sum1=sum1+a[i];
}
}
  std::cout<<"The sum of the even numbers in the array is "<<sum;
  std::cout<<"\nThe sum of the odd numbers in the array is "<<sum1;
}
  