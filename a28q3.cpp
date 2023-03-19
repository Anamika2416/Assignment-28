//Overload subscript operator [] that will be useful when we want to check for an index out of bound.
#include<iostream>
using namespace std;
class index
{
    const int max=100;
    int a[100];
public:
    index()
    {
    }
    void setdata(int n,int indx)
    {
        if(indx>=max)
         {
            cout<<"Array out of bound Exception"<<endl;
            exit(0);
        }
        else
          a[indx]=n;
    }
    void display(int indx)
    {
        cout<<a[indx]<<endl;
    }
    int operator[](int indx)
    {
        if(indx>=max)
        {
            cout<<"Array out of bound Exception"<<endl;
            exit(0);
        }
        else
            return a[indx];
    }

};
int main()
{
    index obj;
    obj.setdata(5,10);
    obj.display(10);
    cout<<obj[10]<<endl;//or it can be written as obj.operator[](10)
    cout<<obj[150]<<endl;

    return 0;
}
