//Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class logicaln
{
   int n;
public:
    void setdata(int x)
    {
        n=x;
    }
    int getdata()
    {
        return n;
    }
    int operator!()
    {
      n=!n;
      return n;
    }
   friend ostream& operator<<(ostream &out,logicaln &l);

};
ostream& operator<<(ostream &out,logicaln &l)
{
    out<<l.n<<endl;
    return out;
}
int main()
{
    logicaln obj;
    obj.setdata(4);
    obj.getdata();
    !obj;
    cout<<"Not is "<<obj.getdata();
    return 0;
}
