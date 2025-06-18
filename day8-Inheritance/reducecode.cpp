#include<iostream>
#include<string>
using namespace std;

class person {
public:
    string name;
    int id;
    string address;
    string email;

    person(string name, int id, string address, string email) {
        this->name = name;
        this->id = id;
        this->address = address;
        this->email = email;
    }
};

class student : public person {
public:
    float fee;

   
    student(int id, string name, string address, string email, float fee) : person(name, id, address, email) 
    {
        this->fee = fee;

        cout << "Name    : " << this->name << endl;
        cout << "ID      : " << this->id << endl;
        cout << "Address : " << this->address << endl;
        cout << "Email   : " << this->email << endl;
        cout << "Fee     : " << this->fee << endl;
    }
};

int main() {
    student obj(1, "Rupkumar", "Lumbini", "memoryclass12@gmail.com", 2344.3434);
    return 0;
}

