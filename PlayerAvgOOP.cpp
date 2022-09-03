#include<iostream>
using namespace std;

class player{

 private:
    float match , goal;
    float avg;

 public:

    void getdata(){
    cout<<"Enter the Number of Goals by Player "<<endl;
    cin>>goal;
    cout<<"Enter the Number of Matches Played by Player "<<endl;
    cin>>match;
    }

    void average(){
    avg=goal/match;
    }

    void print(){
    cout<<"The Average of Player is: "<<avg<<endl;
    }
};

int main(){
player obj;
obj.getdata();
obj.average();
obj.print();

return 0;
}
