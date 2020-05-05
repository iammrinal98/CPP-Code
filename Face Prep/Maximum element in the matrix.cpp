#include<iostream>
using namespace std;
int main()
{
 int m,n,i,j;
  cin>>m;
  cin>>n;
  int a[m][n];
  for(i=0;i<m;i++)
    for(j=0;j<n;j++){
      cin>>a[i][j];
}
  int max=a[0][0];
  for(i=0;i<m;i++){
    
    for(j=1;j<n;j++){
      if(a[i][j]>max){
        max=a[i][j];
      }
    }
     
  }
 cout<<"The maximum element is "<<max;
}