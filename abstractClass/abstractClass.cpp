// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// abstract class
class connection{
    public:
    virtual void connect()=0;  // pure virtual function or abstract function
};
// class in which abstract class is accessed is also a virtual class
class mysql: public connection{
    public:
    void connect(){
        cout<<"sQL SERVER CONNECTED SUCCESSFULLY"<<endl;
    } // it must implement to abstract function 
};

int main() {
   mysql obj;
  obj.connect(); 

    return 0;
}
