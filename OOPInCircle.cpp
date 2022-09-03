#include<iostream>
using namespace std;
class circle{
private:
    float r , A , circum;
public:
    void radius(){
    cout<<"Enter radius "<<endl;
    cin>>r;
    }
    void area(){
    A=3.14*r*r;
    }
    void circumferences(){
    circum=2*3.14*r;
    }
    void print(){
    cout<<"The area of Circle is "<<A<<endl;
    cout<<"The Circumferences of circle is "<<circum<<endl;
    }
};
int main(){
circle obj;
obj.radius();
obj.area();
obj.circumferences();
obj.print();

return 0;
}
