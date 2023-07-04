#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>dictionary;
    // for(int i=1;i<=9;i++)
    //     dictionary.push_back(i);
    
    // enter the value of input array
    int n;
    cin>>n;
    // enter the n values of array
    vector<int>v(n);
    for(int i=0;i<n;i++)
       cin>>v[i];
    vector<int>res;
    cout<<"{";
    for(int i=1;i<=9;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
            if(v[j]%i==0)
                count++;
        cout<<i<<":"<<count;
        if(i!=9)
        cout<<",";
    }
    cout<<"}";
    return 0;
}
