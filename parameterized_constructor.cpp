#include<iostream>
using namespace std;
class ravi{
    int a,b;
    public:
    ravi(int , int); // parametrized constructor
    void print(void){
        cout<<"the sum of number "<<a<<" and "<<b<<" is "<<a<<" + "<<b<<"i"<<endl;
    }

};
ravi::ravi(int x ,int y){  // defining parametrized constructor
    a=x;
    b=y;
}
int main(){
    // implicit call
    ravi n1(5,6); //gave value to parametrized constructor
    n1.print();

    //explicit call
    ravi n2 = ravi(6,9); //gave value to parametrized constructor
    n2.print();
    return 0;
}
