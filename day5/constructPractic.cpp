#include<iostream>
using namespace std;

class student{
	
		int x;
	public:
		student(){
			cout<<"constructor called:"<<endl;
			this->x =5;
			cout<<"x: "<<this->x<<endl;
		}
		~student(){
cout<<"destructor called"<<endl;
		       	this->x=9;
 cout<<"x:" << this->x<<endl;
		}
};

int main(){
	student obj;
	return 0;
}
