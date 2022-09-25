#include<iostream>
using namespace std;

class account{
	
	public:
		string customer_name,type;
		int account_number,balance,withdraw,interest;
		int rateofInterest = 5,time;
		
		void input(){
			
			cout<<"enter your name : ";
			cin>>customer_name;
			cout<<"enter your account number : ";
			cin>>account_number;
			cout<<"account type : ";
			cin>>type;
			cout<<"Deposit Money : ";
			cin>>balance;
			cout<<"enter time in years for interest : ";
			cin>>time;
			interest = (balance * rateofInterest* time /100);
			
		}
		
		void withdraws(){
			cout<<"withdraw money "<<endl;
			cout<<"enter amount : ";
			cin>>withdraw;
			balance  = balance - withdraw;
			
		}
			
			
		
		
		void display(){
			
			cout<<"Name :"<<customer_name<<endl;
		    cout<<"Account Number : "<<account_number<<endl;
			cout<<"Account type : "<<type<<endl;
			cout<<"Balance : "<<balance<<endl;
			cout<<"Interest : "<<interest<<endl;
			
			if(balance < 500){
				cout<<"balance less than 500 imposing penalty of 1000"<<endl;
				cout<<"penalty : "<<1000;
			}
			
		}
};

main(){
	
	account obj;
	obj.input();
	obj.withdraws();
	obj.display();
}
