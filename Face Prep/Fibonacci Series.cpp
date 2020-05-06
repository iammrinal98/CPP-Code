#include<iostream>
int fib(int);
int main()
{
 int n;
  std::cin>>n;
  if(n>0)
    std::cout<<"The term "<<n<<" in the fibonacci series is "<<fib(n-1);
}
int fib(int n)
{
if(n==0 || n==1)
  return n;
  else 
    return fib(n-1)+fib(n-2);
}