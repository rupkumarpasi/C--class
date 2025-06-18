// operator ++ overloading or unary operator overloading
#include <iostream>
using namespace std;

class unary{
    int real;
    public:
    unary(int real){
        this->real = real;
    }
    friend int operator++(unary& c,int);
    void print(){
        cout<<"real number is:"<<real<<endl;
    }
};
int operator++(unary& c,int){ //using postfix : int should be passed as parameter and using prefix int paremter is not nedded
   unary temp = c;
  c.real++;
    return c.real;
}

int main() {
unary obj(1);
 int c = obj++;
cout<<c<<endl;


    return 0;
}	
