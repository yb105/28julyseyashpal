// Write program to make an addition of two number using pointer

#include<iostream>
using namespace std;

int main(){
	
	int num1,num2,sum;
	int *pointer1, *pointer2;
	
	
	cout<<"Enter 2 Numbers : ";
	cin>>num1>>num2;
	
	pointer1 = &num1;
	pointer2 = &num2;
	
	
	sum = *pointer1 + *pointer2;
	
	cout<<"Sum : "<< sum;
	
	
	
	
	
	return 0;
}
