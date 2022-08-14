//Write a program to sort the array of 10 elements

#include<iostream>
using namespace std;



int main(){
	
	int array[10]= {5,28,3,14,15,65,7,81,9,10}, temp;
	
//	cout<< "Enter A No. :";
//	cin >> a;
	for(int i = 0;i<10;i++){
		
		for(int j = i+1;j<10;j++){
			
			if(array[i]>array[j]){
				
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				
				
			}
				
		}
		
		cout<<array[i]<<endl;
	}
	
	

	
	
	
	return 0;
}
