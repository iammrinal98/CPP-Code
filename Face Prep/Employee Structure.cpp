#include<iostream>
struct employee{
  char name[20];
  int id;
  int age;
  char d[20];
  int salary;
}e1;
int main(){
  std::cin>>e1.name;
  std::cin>>e1.id;
  std::cin>>e1.age;
  std::cin>>e1.d;
  std::cin>>e1.salary;
  std::cout<<"Enter name:\nEnter ID:\nEnter age:\nEnter designation:\nEnter Salary:\nEmployee Details";
  std::cout<<"\nName of the Employee : "<<e1.name;
  std::cout<<"\nID of the Employee : "<<e1.id;
  std::cout<<"\nAge of the Employee : "<<e1.age;
  std::cout<<"\nDesignation of the Employee : "<<e1.d;
  std::cout<<"\nSalary of the Employee : "<<e1.salary;
}
  
  
  