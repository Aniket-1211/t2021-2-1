#include <bits/stdc++.h>
using namespace std;
class Calculator{
    public: 
    int calculate(int a,int b,string Operator)
    {
        if(Operator=="+")
           return a+b;
        else if(Operator=="-")
           return a-b;
        else if(Operator=="*")
           return a*b;
        else if(Operator=="/")
           return a/b;
        else{
            cout<<"Invalid Operator ";
            exit(1);
        }
    }
};
int main()
{
    // enter the values of a and b
    int a,b;
    cin>>a>>b;
    // enter the Operator i.e +,-,*,/
    string s;
    cin>>s;
    Calculator *c=new Calculator();
    cout<<c->calculate(a,b,s);
    return 0;
}
