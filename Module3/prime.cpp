//Write a Program to check the given number is prime or not prime.

#include<iostream>
using namespace std;


int main(){
	
	 int num,count;
	 
	 cout<<"Enter Any Number :";
	 cin>>num;
	 
	 for(int i = 1; i<= num; i++){
	 	
	 	if(num%i == 0){
	 		count++;
		 }
	 }
	if(count == 2){
		cout<<"number is prime";
		
	}else{
		cout<<"not prime";
	}
	
	
	return 0;
}
