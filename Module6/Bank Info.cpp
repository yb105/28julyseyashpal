#include<iostream>
using namespace std;

class A{
	
	public:
		
		int choice;
		string state,city;
	
		
		void sbi(){
			
			cout<<"--------Welcome To SBI----------"<<endl;
			cout<<"Gujrat"<<endl;
			cout<<"Rajasthan"<<endl;
			cout<<"MP"<<endl;
			cout<<"MH"<<endl;
			
			cout<<"Select Your State : ";
			cin>>state;
			
		}
		
		void rajSbi(){
			
			cout<<"--------Welcome To Rajasthan SBI----------"<<endl;
			cout<<"Jaipur"<<endl;
			cout<<"Udaipur"<<endl;
			cout<<"Jodhpur"<<endl;
			cout<<"Ajmer"<<endl;
			
			cout<<"Select Your City : ";
			cin>>city;
		
		}
		
			void gujSbi(){
			
			cout<<"--------Welcome To Gujrat SBI----------"<<endl;
			cout<<"Ahemdabad"<<endl;
			cout<<"Baroda"<<endl;
			cout<<"Surat"<<endl;
			cout<<"Rajkot"<<endl;
			
			cout<<"Select Your City : ";
			cin>>city;
		}
			void mpSbi(){
			
			cout<<"--------Welcome To MH SBI----------"<<endl;
			cout<<"Mumbai"<<endl;
			cout<<"Pune"<<endl;
			cout<<"Nagpur"<<endl;
			cout<<"Nashik"<<endl;
			
			cout<<"Select Your City : ";
			cin>>city;
		}
			void mhSbi(){
			
			cout<<"--------Welcome To MP SBI----------"<<endl;
			cout<<"Indore"<<endl;
			cout<<"Bhopal"<<endl;
			cout<<"Gwalior"<<endl;
			cout<<"Ujjain"<<endl;
			
			cout<<"Select Your City : ";
			cin>>city;
		}
};

class B : public A{
	
	
	public:
		
	 void path(){
	 	
	 
	 	if(state == "gujrat"){
	 		
	 		gujSbi();
		 }
		 else if(state == "rajasthan"){
		 	rajSbi();
		 }
		 else if(state == "mh"){
		 	mhSbi();
		 }
		 else if(state == "mp"){
		 	mpSbi();
		 }
	 	
	 }
};


class C : public A{
	
	
	public:
		
	
		
		void citySbi(){
			
			 
			cout<<"-----------Welcome to "<<st<<" SBI-------"<<endl;
			cout<<"Are you a registered User ? "<<endl;
			cout<<"1.Yes       2.No"<<endl;
			cout<<"Select From above : ";
			cin>>choice;
		}
};


main(){
	

	B obj;
	C obj1;
	
	obj.sbi();
	obj.path();
	obj1.citySbi();
}


