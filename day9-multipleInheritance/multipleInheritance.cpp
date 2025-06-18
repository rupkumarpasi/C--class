#include<iostream>
using namespace std;

class parent{
	public:
		parent(){
			cout<<"Parent constructor called"<<endl;
		}
};

class parent1{
	public:
		parent1(){
                        cout<<"Parent1 constructor called"<<endl;
                }
};

class parent2{
	public:
		parent2(){
                        cout<<"Parent2 constructor called"<<endl;
                }
};
class child:public parent,public parent1,public parent2{
	public:
		child(){
			cout<<"child constructor called"<<endl;
		}
};


int main(){
	child obj;
	return 0;
}
