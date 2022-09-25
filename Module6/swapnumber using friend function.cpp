#include<iostream>
using namespace std;


class Swap{
	
	int a,b,temp;
	
	public:
	void getnum(){
		
		cout<<"Enter first number : ";
		cin>>a;
		
		cout<<"Enter second number : ";
		cin>>b;
	}
	
	friend void display(Swap obj1);
};

   void display(Swap obj1){
   	
   	obj1.temp = obj1.a;
   	obj1.a = obj1.b;
   	obj1.b = obj1.temp;
   	
   	cout<<obj1.a<<" "<<obj1.b;
   	
   }

main(){
	
	Swap obj;
	obj.getnum();
	display(obj);
}
