#include<iostream>
using namespace std;

template <class T>

class A{
	
	public:
	   T a,b,temp;
	   
	   void input(){
	   	cout<<"Enter 2 Number : ";
	   	cin>>a>>b;
	   }	
	   
	   void logic(){
	   	
	   	temp = a;
	   	a = b;
	   	b = temp;
	   }
	   
	   void display(){
	   	cout<<a<<b;
	   }	
};

int main(){
	
	A<int> obj;
	
	obj.input();
	obj.logic();
	obj.display();
	
	return 0;
}
