#include<iostream>
using namespace std;
int main()
{
  int n,i,pos,insert;
  cout<<"Enter the number of elements in the array";
  cin>>n;
  int a[n];
 cout<<"\nEnter the elements in the array";
  for(i=0;i<n;i++){
cin>>a[i];
}
  cout<<"\nEnter the location where you wish to insert an element";
  cin>>pos;
  if(n>=pos){
  cout<<"\nEnter the value to insert";
   
  
  cin>>insert;
  for(i=n;i>=pos;i--){
    a[i]=a[i-1];
  }
  a[pos-1]=insert;
  cout<<"\nArray after insertion is\n";
  for(i=0;i<n+1;i++){
    cout<<a[i]<<"\n";
  }
    }
  else{
    cout<<"\nInvalid Input";
  }
return 0;
}