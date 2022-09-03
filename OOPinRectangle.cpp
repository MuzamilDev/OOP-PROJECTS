#include<iostream>
using namespace std;
class Rectangle{
private:
    float L , W , A;
public:
    void getlength(){
    cout<<"Enter Length "<<endl;
    cin>>L;
    }
    void getwidth(){
    cout<<"Enter Width "<<endl;
    cin>>W;
    }
    void area(){
    A=L*W;
    }
    void print(){
    cout<<"The Area of Rectangle is "<<A<<endl;
    }
};
int main(){
Rectangle myObj;
myObj.getlength();
myObj.getwidth();
myObj.area();
myObj.print();

return 0;
}
