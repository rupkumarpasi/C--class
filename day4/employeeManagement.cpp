#include<iostream>
#include<string>

using namespace std;
class Employee{
	public:
		int employeeId;
		string employeeName;
		string employeeDepartment;
		float salary;
};

int main(){
	
	int n;
	cout<<"enter the number of employee"<<endl;
	cin>>n;
	Employee emp[n];
	for(int i=0; i<n; i++){
		cout<<" ***************** Enter employee details for Employee "<< i+1<<"********************"<<endl;
		
		cout<<"enter the employee id: "<< endl;
		cin>>emp[i].employeeId;
		cout<<"enter the employee Name: "<< endl;
                cin>>emp[i].employeeName;
cout<<"enter the employee department: "<< endl;
                cin>>emp[i].employeeDepartment;
cout<<"enter the employee salary: "<< endl;
                cin>>emp[i].salary;

	}

	for(int i=0; i<n; i++){
		cout<<"Details for employee "<<i+1<<endl;

		cout<<"Employee id : "<< emp[i].employeeId<<endl;
		cout<<"Employee Name : "<< emp[i].employeeName<<endl;
		cout<<"Employee Department : "<< emp[i].employeeDepartment<<endl;
		cout<<"Employee salary : "<< emp[i].salary<<endl;
	}
	return 0;
}

