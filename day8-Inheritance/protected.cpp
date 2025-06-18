#include<iostream>
#include<string>
using namespace std;

class parent{
	private:
		int privateVariable;

	protected:
		int protectedVariable;

	public:
		int publicVariable;

		void setData(int x){
			this->privateVariable = x;
		}
		/*void setDataProtected(int x){
 		this->protectedVariable = x;
		}
		*/
};

class child: public parent{
	public:
		void setdata(int x){
		       protectedVariable = x;

       cout<<"protectedVaraiable:"<<protectedVariable<<endl;
		}
};

int main(){
	child obj;
	obj.setdata(4);
	return 0;
}
