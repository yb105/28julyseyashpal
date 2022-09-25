#include<iostream>
using namespace std;
#include<cstring>

class String{
	
	char str[20];
	
	public:
		void getString(){
			
			cout<<"Enter A String : ";
			cin>>str;
		}
		
		void display(){
			
			cout<<"String Addition : "<<str;
		}
		
		String operator +(String str1){
			
			String temp;
			
			strcpy(temp.str, str);
			strcat(temp.str,str1.str);
			return temp;
			
		}
};

main(){
	
	String obj1;
	String obj2;
	String obj3;
	
	obj1.getString();
	obj2.getString();
	
	obj3 = obj1 + obj2;
	
	obj3.display();
	
	
	
}
