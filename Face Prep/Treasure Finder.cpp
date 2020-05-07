#include<iostream>
int main()
{
 int a,b,c,i,hcf;
  std::cin>>a;
  std::cin>>b;
  std::cin>>c;
  if(a>=b && a>=c){
    if(b>=c)
    std::cout<<"The treasure is in box which has number "<<b;
  else
    std::cout<<"The treasure is in box which has number "<<c;
  }
  else if(b>=a && b>=c){
    if(a>=c)
    std::cout<<"The treasure is in box which has number "<<a;
  else
    std::cout<<"The treasure is in box which has number "<<c;
  }
 else if(a>=b)
    std::cout<<"The treasure is in box which has number "<<a;
  else{
    std::cout<<"The treasure is in box which has number "<<b;
  }
  for(i = 1; i <= a || i <= b || i<=c; i++) {
   if( a%i == 0 && b%i == 0 && c%i==0 )
      hcf = i;
   }

   std::cout<<"\nThe code to open the box is "<<hcf;
  
 
}
  
  