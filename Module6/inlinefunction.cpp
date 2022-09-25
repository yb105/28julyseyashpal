#include<iostream>
using namespace std;

class A{
	
	public:
		inline int multi(int a, int b){
			return a*b;
		}
		
		inline int cube(int a){
			return a*a*a;
		}
};

int main(){
	
	int a,b,c;
	A obj;
	
	cout<<"Enter 2 Values for Multiplication : ";
	cin>>a>>b;
	
	cout<<"Enter value for Cube : ";
	cin>>c;
	
	
	cout<<"Multiplication Value is : "<<obj.multi(a,b)<<endl;
	cout<<"Cubic value is : "<<obj.cube(c);
	
	
}
