#include<iostream>
#include<string>
using namespace std;
int main()
{
 string f;
  int a;
  cin>>f;
 cin>>a;
  if(f=="front" && a==1)
    cout<<"Left Handed";
  else if(f=="rear" && a==1 )
          cout<<"Right Handed";
  else if(f=="front")
    cout<<"Right Handed";
  else if(f=="rear")
    cout<<"Left Handed";
  
    
}