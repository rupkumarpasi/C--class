#include<iostream>
#include<string.h>

using namespace std;

class student{

	private:
		int rollno;
		string name;

	public:
		void setdata(int r){
			rollno = r;
		}

		void setName(string Name){
			name = Name;
		}

		int getdata(){
			return rollno;
		}
		string getName(){
			return name;
		}




};
int main(){
	student st;
	st.setdata(1);
	st.setName("Rupkumar");
	cout<<st.getdata()<<endl;
cout<<st.getName()<<endl;
	return 0;
}
