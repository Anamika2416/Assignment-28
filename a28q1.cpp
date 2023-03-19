#include<bits/stdc++.h>
using namespace std;
class output1
{
  int x,y;
  public:
      output1()
      {
          cout<<"DC called"<<endl;
      }
      output1(int a,int b)
      {
          cout<<"PC called"<<endl;
          x=a;
          y=b;
      }
    friend ostream& operator<<(ostream &out,output1 &ob);
    friend istream& operator>>(istream &in,output1 &ob);

};
 ostream& operator<<(ostream &out,output1 &ob)
      {
          cout<<"Output << called"<<endl;
          out<<"x="<<ob.x<<"  y="<<ob.y<<endl;
          return out;
      }
 istream& operator>>(istream &in,output1 &ob)
      {
          cout<<"Input>> called enter values"<<endl;
          in>>ob.x>>ob.y;
          return in;
      }
int main()
{
    output1 obj1(7,8),obj2;

    cin>>obj2;
    cout<<obj2;
}
