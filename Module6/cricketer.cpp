#include<iostream>
using namespace std;

class Cricketer{
	
	public:
		
		int totalRuns,numberofTimesOut,bestPerformance;
		
		void inputdata(){
			
			cout<<"Enter Total Number of Runs : ";
			cin>>totalRuns;
			cout<<"Enter Number of Times Batsman Out : ";
			cin>>numberofTimesOut;
			cout<<"Enter Best Performance : ";
			cin>>bestPerformance;
		}
		
};

class Batsman : public Cricketer{
	
	public:
		int average;
		void averageRun(){
			
			average = totalRuns/numberofTimesOut;
		}
		
		void display(){
			
			cout<<"Average Runs : "<<average<<endl;
			cout<<"Total Runs : "<<totalRuns<<endl;
			cout<<"Best Performance : "<<bestPerformance<<endl;
			
		}
};

main(){
	
	Batsman obj;
	
	obj.inputdata();
	obj.averageRun();
	obj.display();
	
	
}
