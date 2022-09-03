#include<iostream>
using namespace std;
class Multiply{
private:
 int a , b , z;
 public:
    void getdata(){
    cout<<"Enter first Number "<<endl;
    cin>>a;
    cout<<"Enter Second Number "<<endl;
    cin>>b;
    }
    void product(){
    z=a*b;
    }
    void print(){
    cout<<"The product = "<<z<<endl;
    }
};
int main(){
Multiply obj;
obj.getdata();
obj.product();
obj.print();

return 0;
}
