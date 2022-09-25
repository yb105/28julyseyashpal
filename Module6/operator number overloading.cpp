#include<iostream>
using namespace std;

class Add{
	
	int num1, num2;
	
	public:
		Add(int n = 0, int m = 0){
			
			num1 = n;
			num2 = m;
		}
	
		
		void display(){
			
			cout<<"Number1 : "<< num1<<endl;
			cout<<"Number2 : "<< num2;
		}
	
	
	Add operator +(Add obj2){
		
		Add obj3;
		
		obj3.num1 = num1 + obj2.num1;
		obj3.num2 = num2 + obj2.num2;
		return obj3;
		
	}
	
	
};
main(){
	
	
	Add obj1(5,4);
	Add obj2(2,4);
	Add obj3;
	
	obj3 = obj1 + obj2;
	
	obj3.display();
	

	
	
	
	
	
	
}
