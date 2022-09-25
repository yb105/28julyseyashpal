#include<iostream>
using namespace std;

class student{
	
	public:
		int percentage;
};

class teacher{
	
	public:
		int salary;
};

class person : public student, public teacher{
	
	public:
		char name[20];
		int age,choice;
		
		void data(){
			cout<<"Enter Your Name : ";
			cin>>name;
			cout<<"Enter Your Age : ";
			cin>>age;
			cout<<"1. Teacher "<<endl;
			cout<<"2. Student "<<endl;
			cout<<"Select your choice : ";
			cin>>choice;
			
			if(choice == 1){
				cout<<"Enter Your Salary : ";
				cin>>salary;
				cout<<"Name : "<<name<<endl;
				cout<<"Age : "<<age<<endl;
				cout<<"You Are Teacher"<<endl;
				cout<<"Salary : "<<salary;
				
			}else if(choice == 2){
				cout<<"Enter Your Percentage : ";
				cin>>percentage;
				cout<<"Name : "<<name<<endl;
				cout<<"Age : "<<age<<endl;
				cout<<"You Are Student"<<endl;
				cout<<"Percenatge : "<<percentage<<"%";
				
			}else{
				cout<<"invalid Choice";
			}
		}
		
	
};

main(){
	
	person obj;
	obj.data();
}
