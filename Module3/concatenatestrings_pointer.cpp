//Write a program to concatenate the two string using pointer. 

#include<iostream>
using namespace std;

int main(){
	
	char str1[10], str2[10];
    char * ptr1 = str1;
    char * ptr2 = str2;
    
    
     cout<<"Enter first string : ";
    cin>>str1;
    cout<<"Enter secondstring : ";
    cin>>str2;
    
    while(*(++ptr1));
 
    
    while(*(ptr1++) = *(ptr2++));
 
    cout<<str1;
	
	
	
	
	return 0;
}
