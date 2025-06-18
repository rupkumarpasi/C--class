#include<iostream>
#include<string>
using namespace std;

class Employee{
	public: 
		int id;
		string name;
		string department;
		float salary;

		void updateemployee(int id, string name , string department, float salary){


		}


};

void setdetails(Employee emp){
	cout<<"Details for employee" <<i + 1<<endl;
        cout<<"Details for employee" <<i + 1<<endl;

        cout<<"Enter the id: "<<emp[i].id<<endl;
        cin>>emp[i].id;
cout<<"Enter the Name: "<<emp[i].id<<endl;
        cin>>emp[i].name;
cout<<"Enter the Department: "<<emp[i].id<<endl;
        cin>>emp[i].department;
cout<<"Enter the salary: "<<emp[i].id<<endl;
        cin>>emp[i].salary;

	cout<<"Enter the id: "<<emp[i].id<<endl;
	cin>>emp[i].id;
cout<<"Enter the Name: "<<emp[i].id<<endl;
        cin>>emp[i].name;
cout<<"Enter the Department: "<<emp[i].id<<endl;
        cin>>emp[i].department;
cout<<"Enter the salary: "<<emp[i].id<<endl;
        cin>>emp[i].salary;
}

void displayoutput(Employee emp[i]){
cout<<"******** Detailed output for employee "<<i+1<<"**************"<<endl;
cout<<"ID :"<<emp[i].id<<endl;
cout<<"Name :"<<emp[i].name<<endl;
cout<<"Department :"<<emp[i].department<<endl;
cout<<"salary :"<<emp[i].salary<<endl;




int main(){
	int n;
	cout<<"enter the number of user"<<endl;
	cin>>n;

	Employee emp;
	setdetails(emp[0]);
	setdetails(emp[1]);
setdetails(emp[2]);
setdetails(emp[3]);
setdetails(emp[4]);
displayoutput(emp[0]);

	return 0;
}
