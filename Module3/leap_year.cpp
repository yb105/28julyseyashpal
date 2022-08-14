//Write a Program to check the given year is leap year or not.

#include<iostream>
using namespace std;

int main(){
	
	int year;
	
	cout<<"Enter Year : ";
	cin>>year;
	
	
	if(year%4 == 0){
		
		cout<< "Leap Year";
	}else{
		
		cout<<"Not A Leap Year";
	}
	
	
	
	
	
	return 0;
}
