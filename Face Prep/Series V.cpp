#include<iostream>
using namespace std;
int main()
{
  int n,i,d;
  cin>>n;
  cout<<"121 ";
  for(i=1;i<=n-1;i++){
    d=(11+4*i)*(11+4*i);
   cout<<d<<" ";
}
}