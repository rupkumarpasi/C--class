#include <iostream>
using namespace std;

int add(int a, int b){   // add(int a, int b) signature
    return a + b;
}
   
double add(double a, double b){
    return a + b;
}

double add(int a, double b){
 return a + b;   
}

double add(double a, int b){
 return a + b;   
}

int main() {
int a=5;
int b=6;
double c=4.5, d=5.5;

cout<<add(a,b)<<endl;
cout<<add(c,d)<<endl;
cout<<add(a,d)<<endl;
cout<<add(c,b)<<endl;


    return 0;
}





