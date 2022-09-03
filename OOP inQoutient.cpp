#include<iostream>
using namespace std;

class qoutient{
private:
    float o ,p ,y;
public:

    void getdata(){
    cout<<"Enter First Number "<<endl;
    cin>>o;
    cout<<"Enter Second Number "<<endl;
    cin>>p;
    }

    void division(){
    y=o/p;
    }

    void print(){
    cout<<"The division of numbers is "<<y<<endl;
    }
    };
    int main(){
    qoutient obj;
    obj.getdata();
    obj.division();
    obj.print();

    return 0;
    }
