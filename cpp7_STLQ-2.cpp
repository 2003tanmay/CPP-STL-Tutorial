/*Q => Given N strings & Q queries. Print "YES" if in querey stirng is present which is equal to any string 
present in N strings else print "NO".*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<string>s;
    int n;
    cout<<"Enter N(Quantity of Strings)"<<endl;
    cin>>n;
    cout<<"Enter strings"<<endl;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cout<<"Enter N(Quantity of queries:)"<<endl;
    cin>>q;
    cout<<"Enter queries"<<endl;
    while (q--)
    {
        string str;
        cin>>str;
        if(s.find(str)==s.end()) cout<<"NO\n";
        else cout<<"YES\n";
    } 
    
    return 0;
}