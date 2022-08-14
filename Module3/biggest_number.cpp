//Write a program to find out the max number from given 10 elements of array

#include<iostream>
using namespace std;


int main(){
	
	int num,i,j,biggest;
	int array[10];
	
	cout<<"enter size of array : ";
	cin>>num;
	
	
	cout<<"Enter array element : ";
	
	
	
	for(i = 0; i<num; i++){
		
	
	    cin>>array[i];
	    
	  
	}
	
	biggest = array[0];
	
	
	for(j = 0; j<num; j++){
		
		if(array[j] > biggest){
			
			biggest = array[j];
		}
	}
	
		cout<<"Biggest Number is : "<< biggest;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
