//Write a program to find out the factorial of given number using function.

#include<iostream>
using namespace std;

int factorial(int a);

int main(){
	
	int a;
	
	cout<< "Enter A No. :";
	cin >> a;
	
	cout<<"factorial : "<< factorial(a);
	
	
	
	return 0;
}

int factorial(int a){
	
if(a ==1 ){
	return 1;

}else {
	return a*factorial(a-1);
}
	

}
