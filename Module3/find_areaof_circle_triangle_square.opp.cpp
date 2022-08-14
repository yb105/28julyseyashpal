/*Write a program of to find out the Area of Triangle, Rectangle and Circle 
using Switch Case .(Must Be Menu Driven)*/

#include<iostream>
#include <cmath>
using namespace std;

int main(){
	
	int choice, radius, length, breadth,a,b,c;
	float area,side;
	
	cout<<"Press 1 to calculate the area of Circle"<<endl
        <<"Press 2 to calculate the area of Rectangle"<<endl
        <<"Press 3 to calculate the area of Triangele"<<endl;
        
        cout<<"Enter Your Choice : ";
        cin>>choice;
        
        switch(choice){
        	
        	case 1: cout<<"Enter Radius : ";
        	        cin>>radius;
        	        area = 3.14*radius*radius;
        	        cout<<"Area of Circle is : "<<area;
        	        break;
        	        
        	case 2: cout<<"Enter Length : ";
			        cin>>length;
					cout<<"Enter Breadth : ";
					cin>>breadth;
					cout<<"Area of Rectangle is : "<< length*breadth;
					break;        
					
			case 3: cout<<"Enter 3 sides of triangle : ";
			        cin>>a>>b>>c;
			        side = (a+b+c)/2;
			        area = sqrt(side*(side - a)*(side - b)*(side - c));
			        cout<<"Area of Triangle : "<<area;
			        break;
			        
			    
            default: cout<<"wrong choice";
}
        
	
	
	
	
	
	
	
	
	
	
	return 0;
}
