#include<iostream>
#include<math.h>
using namespace std;
class calculator
{
    float a,b;
    public:
    void input(){
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
    }
    float add(){
        return (a+b);
    }
    float sub(){
        return (a-b);
    }
    float mul(){
        return (a*b);
    }
    float div(){
        if(b==0){
            cout<<"Division by zero"<<endl;
            return INFINITY;
           }
           else{
            return (a/b);
           }
          }
};


int main(){
    int ch;
    calculator c;
    cout<<"Enter 1 to add two numbers"<<"\nEnter 2 to subtract two numbers"<<"\nEnter 3 to multiply two numbers"
    <<"\nEnter 4 to divide two numbers"<<"\nEnter 0 to Exit"<<endl;
    do{
        cout<<"Enter choice:";
        cin>>ch;
        switch(ch){
            case 1:
            c.input();
            cout<<"Result:"<<c.add()<<endl;
            break;
            case 2:
            c.input();
            cout<<"Result:"<<c.sub()<<endl;
            break;
            case 3:
            c.input();
                cout<<"Result:"<< c.mul()<<endl;
                break;
                case 4:
                c.input();
                cout<<"Result:"<<c.div()<<endl;
                break;
            }
        }
        while(ch>=1 && ch<=4);
    return 0;
}
