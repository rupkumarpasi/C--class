#include<iostream>
using namespace std;

class Base
{
	public:
		int id;
		string name;
		string address;

		Base():Base(5){
			cout<<"person default constructer called:"<<endl;
		}
		Base(int id){
			this->id = id;
			cout<<"Id :"<<this->id<<endl;
 		}
		Base(string name, string address){
			this->name = name;
			this->address = address
		}

};

class derived: public Base{
	public:
		derived(int x):derived(){
			cout<<"derived 1 parameter called"<<endl;
		}
		derived(){
			cout<<"Default derived"<<endl;
		}
		derived(string name, string address):Base(name,address){
			cout<<"name: "<<this->name<<endl;
			cout<<"address: "<<this->address<<endl;
		}
};
int main(){
	derived obj(1);
	derived obj1("rupkumar","lumbini");
	return 0;
}
