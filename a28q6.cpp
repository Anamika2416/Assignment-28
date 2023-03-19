//Create a complex class and overload assignment operator for that class.
#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex()
    {
    }
    complex(int a,int b):real(a),img(b){}
    complex operator=(int x)
    {
        complex temp;
        temp.real=real;
        temp.img=img;
        return temp;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    complex cobj(7,8),cobj1;
    cobj1=cobj;
    cobj.display();
    cobj1.display();
    return 0;
}
