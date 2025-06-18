#include<iostream>
using namespace std;

class parent{
        public:
                int x,y;
                // method overloading is defining a multiple function of same name with different signature
               virtual int display(int x){
                        this->x = x;
                        return this->x;
                }
              virtual int display(int x, int y){
                        this->x = x;
                        this->y = y;
                        return this->x + this->y;
                }
};

class child: public parent{
        public:
                int display(int a) override{
                        this->x = a;
                        this->y = 4;
                        return this->x + this->y;
                }
};


int main(){
child obj;
cout<<"passing 1 parameter->x : "<<obj.display(2)<<endl;
// cout<<"passing 2 parameter->x : "<<obj.display(2,3)<<endl;

        return 0;
}
