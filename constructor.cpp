#include<iostream>
#include<string>

using namespace std;
// when multiple constructor called that method is seemed as constructor overloading
class student{
	public:

	int id;
	string address;
	string name;
float salary;
student(float salary){


	this->salary = salary;
	cout<<"salary : " <<this->salary<<endl;
}

	student(string name):student("lumbini",1){
		this->name = name;
		cout<<"Name : "<< this->name<<endl;
	}
	student(string address,int id):student(42343.343){
		this->address = address;
		cout<<"Address : " <<this->address<<endl;
	}
};

int main(){
	student obj("rupkumar");


	return 0;
}

