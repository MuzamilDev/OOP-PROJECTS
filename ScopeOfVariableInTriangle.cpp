#include<iostream>
using namespace std;
class Triangle{
private:
    float base , height , A;
public:
    void getBase();
    void getHeight();
    void area();
    void print();
};
void Triangle::getBase(){
cout<<"Please Enter Base of Triangle "<<endl;
cin>>base;
}
void Triangle::getHeight(){
cout<<"Please also enter value of height "<<endl;
cin>>height;
}
void Triangle::area(){
A=0.5*base*height;
}
void Triangle::print(){
cout<<"The Area of Triangle is equal to "<<A<<endl;
}
int main(){
Triangle T;
T.getBase();
T.getHeight();
T.area();
T.print();

return 0;
}
