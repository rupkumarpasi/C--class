#include<iostream>
#include<string>
using namespace std;

class student{
	private:
		static string name;
	public:
	int id;
	~student(){
		cout<<"destructor called"<<endl;
	}
	static string setdata(string name){
		student::name = name;
		return student::name;
	}

       
};
string student::name;
int main(){
	student obj1, obj2;
	obj1.id = 1;

	cout<<"Your name is: "<<student::setdata("rupkumar")<<endl;
	return 0;
}
