/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include<iostream>
#include<iomanip>
using namespace std;

class cricketer
{

	private :
			        
			string cricketer_name;
			
			
			
	public :
			void get_cricketer()   
			{
				cout<<"\n\n\n\t Enter cricketer name : ";
				cin>>cricketer_name;
			
			}
	
			void print_cricketer()
			{
				cout<<"\n\n\t Person Name : "<<cricketer_name;
				
			}
		
};
class batsman : public cricketer
{

	private :
			        
			//string cricketer_name;
			int total_runs;
			int enigs;
			int bestPerformance;
			double average_runs;
			
			
	public :
			void get_batsman()   
			{
				cout<<"\n\n\n\t Enter total_runs : ";
				cin>>total_runs;
				cout<<"\n\n\n\t Enter enigs : ";
				cin>>enigs;
				cout<<"\n\n\n\t Enter bestPerformance : ";
				cin>>bestPerformance;
				
			
			}
	        void get_average()
	        {
					average_runs=total_runs/enigs;
			}
			void print_batsman()
			{
				cout<<"\n\n\t total  runs : "<<total_runs;
				cout<<"\n\n\t average runs : "<<setprecision(5)<<average_runs;
				cout<<"\n\n\t bestPerformance: "<<bestPerformance;
				
			}
			
		
};



main()
{
	batsman B ;
	
	cout<<"\n\n\t Enter details for cricketer ------------";
	B.get_cricketer();
	B.get_batsman();
	B.get_average();

	
	cout<<"\n\n\t Print the details of cricketer -----------";
	B.print_cricketer();
	B.print_batsman();
}
