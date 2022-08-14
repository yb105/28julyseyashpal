/*  Write a program user enter the 5 subjects mark. You have to make a total and 
find the percentage. 
a) percentage > 75 you have to print “Distinction” 
b) percentage > 60 and percentage <= 75 you have to print “First class” 
c) percentage >50 and percentage <= 60 you have to print “Second class”
d) percentage > 35 and percentage <= 50 you have to print “Pass class” 
e) Otherwise print “Fail"  */


#include<iostream>
using namespace std;


int main(){
	
	int num1,num2,num3,num4,num5,sum,percentage;
	
	cout<<"Enter 5 Subjects Numbers : ";
	cin>>num1>>num2>>num3>>num4>>num5;
	
	sum = num1 + num2+ num3+ num4+ num5;
	
	percentage = (sum*100)/500;
	
	
   cout<<"Total Marks : "<< sum<<endl;
   cout<<"Percentage : "<< percentage<<"%"<<endl;
   
   
   if(percentage > 75){
   	
   	cout<<"Distinction";
   	
   }else if(percentage >60 && percentage<= 75){
   	
     cout<<"First Class";
     
   }else if(percentage >50 && percentage <= 60){
   	
   	cout<<"Second Class";
   	
   }else if(percentage >35 && percentage <= 50){
   	
   	cout<<"Pass Class";
   	
   }else{
   	
   	cout<<"Fail";
   	
   }
	
	
	
	
	return 0;
}
