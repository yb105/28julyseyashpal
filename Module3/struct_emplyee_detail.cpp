/*Write a program of structure for five employee that provides the following 
information print and display empno, empname, address and age*/


#include<iostream>
using namespace std;


struct employee{
	
	char name[20];
	char address[50];
	int age;
	int num;
	
	
};


int main(){
	
	
	struct employee emp;
	
	
     cout<<"Enter employee name : ";
     gets(emp.name);
     cout<<"Enter employee address :";
	gets(emp.address);
     cout<<"Enter emloyee age : ";
	 cin>>emp.age;
      cout<<"Enter emloyee number : ";
	  cin>>emp.age;
	
	
	
	cout<<"Name : "<< emp.name<<endl;
    cout<<"Address : "<< emp.address<<endl;
	cout<<"Age : "<< emp.age<<endl;
	cout<<"Employee Number : "<< emp.num;
	
	
	
	
	
	
	
	return 0;
}
