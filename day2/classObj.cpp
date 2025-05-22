#include <iostream>
#include <string>

using namespace std;

class Employee{
	private:
	int id;
	string name;
	 public:
	void setEmployee(int r){
		id = r;
	}

	int getEmployeeid()
	{
		return id;
	}

	void setEmployeeName(string employeeName){
		name = employeeName;
	}
	 string getEmployeeName(){
                return name;
        }

};

int main(){
	int id;
	cout<<"enter your id"<<endl;
	cin>>id;

Employee obj;
        obj.setEmployee(id);

	string name;

	cout<< "enter your username"<<endl;
	cin.ignore();
	 getline(cin, name);
	obj.setEmployeeName(name);

	cout<<"Employee id :: "<<obj.getEmployeeid()<<endl;
	cout<<"Employee Name :: "<<obj.getEmployeeName()<<endl;

	return 0;
}
