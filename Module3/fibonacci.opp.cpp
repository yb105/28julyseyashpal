// Write a program you have to print the Fibonacci series up to user given number

#include<iostream>
using namespace std;

int fibonacci(int term);

int main(){
	
	int a;
	
	cout<< "Enter A No. :";
	cin >> a;
	
	fibonacci(a);	
	

	return 0;
}

int fibonacci(int term){
	
	int n1 = 0;
	int n2 = 1;
	int next = 0;
	
	
		for(int i = 0; i<term; i++){
		
		cout<<n1<<endl;
	    next = n1 + n2;
		n1 = n2;
		n2 = next;
		

	
	
	
	
}
}

