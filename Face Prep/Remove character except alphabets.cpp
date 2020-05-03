/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string.h>
int main()
{
 char str[200];
  int i,j;
  std::cin.getline(str,200);
  for(i=0;i<str[i]!='\0';++i){
    while (!((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z' || str[i]=='\0')))
    {
      for(j=i;j<str[j]!='\0';++j){
        str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
  }
  std::cout<<str;
}
      