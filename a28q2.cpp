#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex()
    {
        cout<<"DC called"<<endl;
    }
   /* complex(int real,int img):real(real),img(img) //this will be used when setdata would not have been mentioned
    {
    }*/
    void setdata(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void display()
    {
        cout<<endl<<"Number is "<<real<<" + "<<img<<"i";
    }
};
int main()
{
    complex c1;
    c1.setdata(5,4);
    c1.display();
}

