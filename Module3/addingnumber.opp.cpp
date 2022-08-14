//Write a program make a summation of given number(E.g. 1523 ans :-11)

#include<iostream>
using namespace std;

int main(){
	
	int number, rem, a;
	
	cout<< "Enter A  Number : ";
	cin>>number;
	
	while(number>0){
		
		rem = number%10;
		a = a + rem;
		number = number / 10;

	}
	  cout<<a;
	
	
	
	
	return 0;
}
