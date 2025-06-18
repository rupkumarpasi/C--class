#include<iostream>
using namespace std;

class complex{
	private:
		int real;
		int imaginary;
	public:
		complex(int real=0,int imaginary=0){
			this->real = real;
			this->imaginary = imaginary;
		}
		void print(){
        cout<<this->real<<"+"<<this->imaginary<<"i"<<endl;
}
	complex sum(complex c){
		complex temp;
		temp.real = this->real + c.real;
		temp.imaginary = this->imaginary + c.imaginary;
		return temp;
	}
};


int main(){
	complex c1(1,2);
	complex c2(3,4);
	complex c3 = c1.sum(c2);
	c3.print();
	return 0;
}
