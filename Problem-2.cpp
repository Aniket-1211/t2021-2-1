#include<bits/stdc++.h>
using namespace std;
int main()
{
    // enter the value of a
    int a;
    cin>>a;
    int value=1;
    for(int i=0;i<a;i++)
    {
        cout<<value;
        if(i!=a-1)
            cout<<", ";
        value+=2;
        
    }
    return 0;
}
