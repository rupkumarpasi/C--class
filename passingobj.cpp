#include<iostream>
using namespace std;

class student{
	public:
		int x;

		void add(student E){
			x= x + E.x;
		}
};

int main(){
	student obj1,obj2;

	obj1.x = 7;
	obj2.x = 8;

	obj1.add(obj2);

	cout<<"X: "<<obj1.x<<endl;
	 
	return 0;
}
