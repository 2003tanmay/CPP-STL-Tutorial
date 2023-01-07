// Q => Given N strings,print unique string in leographical order with their frequency.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> m;
    int n;
    cout<<"Enter N(Quantity of Strings)"<<endl;
    cin>>n;
    cout<<"Enter strings"<<endl;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    cout<<"Strings in lexographical order with their frequency:"<<endl;
    for (auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    } 
    return 0;
}