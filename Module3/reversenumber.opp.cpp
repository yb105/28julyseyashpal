// Write a program to print the number in reverse order. 

#include<iostream>
using namespace std;

int palindrone(int number);

int main(){
	
	int a;
	
	cout<< "Enter A Numbers :";
	cin >> a;
	
	cout<<palindrone(a)<< endl;
	
	if(palindrone(a) == a){
		
		cout<<"Number is Palindrone";
	}else{
		cout<<"Number is not Palindrone" << endl;
	}
	
	return 0;
}

int palindrone(int number){
	
	int rem, reverse;
		
	while(number>0){
		
		rem = number %10; //123% 10 = 3     // 12 % 10 = 2    // 1% 10 = 1
		number = number/10; // 123 / 10 = 12   // 12 / 10 = 1  // 1 / 10 = 0 
		
		reverse = (reverse * 10) + rem;  // (0 * 10) + 3 = 3   // (3 * 10) + 2 = 32  // (32 * 10) + 1 = 321
		 // reverse 321 
		
	}
	
	
	
	
}
