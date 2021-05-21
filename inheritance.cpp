#include<iostream>
using namespace std;
class Base
{
public:
    void fun(int x)
    {
        cout<<"Base Class "<<endl;
    }
};
class Derived : public Base
{
public:
    void fun(){
    cout<<"Derived Class";
    }
};
int main()
{
    Derived d;
    d.fun(65);
    d.fun();
    return 0;
}
