#include<iostream>
using namespace std;
class add{
private:
    int a , b , c;
public:
    void getdata();
    void sum();
    void print();
};

void add::getdata(){
cout<<"Enter First Number "<<endl;
cin>>a;

cout<<"Enter Second Number "<<endl;
cin>>b;
}
void add::sum(){
c=a+b;
}

void add::print(){
cout<<"The sum is equal to "<<c<<endl;
}

int main(){
add myObj;
myObj.getdata();
myObj.sum();
myObj.print();

return 0;
}
