#include<iostream>
using namespace std;

class Bank{
	
	char name[30],type[10];
	int accNum,balance,choice,deposit,withdraw;
	
	public:
	void getInfo(){
		
		cout<<"Enter Your Name : ";
		gets(name);
		cout<<"Enter Your Account Number : ";
		cin>>accNum;
		cout<<"Select Account Type : ";
		cin>>type;
		cout<<"Enter Balance : ";
		cin>>balance;
	}
	
	
	void menu(){
		
		cout<<"-----YB's Bank-----"<<endl;
		cout<<"1. Deposit Amount"<<endl;
		cout<<"2. Withdraw An Amount"<<endl;
		cout<<"3. Display Name And Balance"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
	}
	
	
	void menuLogic(){
		
		switch(choice){
			
			case 1: cout<<"Enter Amount for Desposit : ";
			cin>>deposit;
			balance += deposit;
			cout<<"Amount Deposited"<<endl;
			break;
			
			case 2: cout<<"Enter Amount To withdraw : ";
			cin>>withdraw;
			if(withdraw <= balance){
				balance -= withdraw;
				cout<<"Amount Withdrawn"<<endl;
			}else{
				cout<<"Insufficient Balance"<<endl;
			}
			break;
			
			case 3: cout<<"Name : "<< name<<endl;
			        cout<<"Balance : "<<balance<<endl;
			        cout<<"Account Type : "<<type<<endl;
			        cout<<"Account Number : "<<accNum<<endl;
			        break;
			
			        
		}
	}
};

main(){
	char ch;
	
	Bank obj;
	obj.getInfo();
	obj.menu();
	obj.menuLogic();
	cout<<"Want To See Menu Again press y for yes and n for no : ";
	cin>>ch;
	
	if(ch == 'y'){
		while(ch == 'y'){
				obj.menu();
		        obj.menuLogic();
		        cout<<"Want To See Menu Again press y for yes and n for no : ";
	            cin>>ch;
			
		}
	
	}else if(ch == 'n'){
		cout<<"Thank You For Using Our Bank";
	}
}
