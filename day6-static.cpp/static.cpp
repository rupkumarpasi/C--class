#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		static int id ;
		string name;
	static string college;
              

		void display(){
			cout<<"id : "<<id++<<endl;
			cout<<"collegeName : "<<college<<endl;
		}
};

string student::college;
int student::id;

int main(){
	
	student obj1, obj2, obj3;
	obj1.college = "Radiant";
	obj1.id = 1;

	obj1.display();
	obj2.display();
	return 0;

}


