#include<iostream>
using namespace std;

template <class T>

class A{
	
	
	public :
		

	
		
		void input(){
			
				T n;
	
             	T array[n],temp;
	
			
			cout<<"Enter length of array : ";
			cin>>n;
			for(int i = 0;i<n;i++){
		
		      cout<<"Enter Array Element : ";
		      cin>>array[i];
		      
		  }
		      
		      for(int i = 0;i<n;i++){
		
	        	for(int j = i+1;j<n;j++){
			
		        	if(array[i]>array[j]){
				
			    	temp = array[i];
			    	array[i] = array[j];
				    array[j] = temp;	
			}
				
		}
		
		cout<<array[i]<<endl;
	}
	
	
}
		
		
	
		
};

main(){
	
	A<int> obj;
	obj.input();
}
