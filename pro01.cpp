#include<iostream>

using namespace std;

class admin{
	
	public:
		
		char comp_name;
		int manag_salary;
		int emp_salary;
		int total_staff;
		int total_annual_revenue;
		char can_terminate;
};

class manager : public admin{
	
	public:
		
		void setter(){
		
			cout<<"Enter Company Name : ";
			cin>>comp_name;
			cout<<endl;
		
			cout<<"Enter Manager Salary : ";
			cin>>manag_salary;
			cout<<endl;
		
			cout<<"Enter Employee Salary : ";
			cin>>emp_salary;
			cout<<endl;
		
			cout<<"Enter Total Staff : ";
			cin>>total_staff;
			cout<<endl;
			
			cout<<"Enter Total Annual Revenue : ";
			cin>>total_annual_revenue;
			cout<<endl;
			
			cout<<"Enter Can Terminate : ";
			cin>>can_terminate;
			cout<<endl;
		}
};

class employee : public manager{
	
	public:
	
	void getter(){
		
			cout<<"Company Name : "<<comp_name<<endl;
		
			cout<<"Manager Salary : "<<manag_salary<<endl;
		
			cout<<"Employee Salary : "<<emp_salary<<endl;
		
			cout<<"Total Staff : "<<total_staff<<endl;
			
			cout<<"Total Annual Revenue : "<<total_annual_revenue<<endl;
			
			cout<<"Can Terminate : "<<can_terminate<<endl;
		}
};

main(){
	
	employee obj;
	
	obj.setter();
	obj.getter();
	
}
