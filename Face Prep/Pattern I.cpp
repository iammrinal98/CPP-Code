#include<iostream>
int main(){
  int n,k=4,i,j;
  std::cin>>n;
  for(i=1;i<=k;i++){
for(j=0;j<i;j++){
std::cout<<n;
		}
	std::cout<<"\n";
		n++;
	}
	
  n--;
  for(i=k;i>0;i--){
for(j=0;j<i;j++){
  std::cout<<n;
}
    std::cout<<"\n";
    n--;
  }
  return 0;
}