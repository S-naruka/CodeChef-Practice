#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
        cin>>t;
    while(t--){
    int a,b,sol=INT_MAX,c=0;
    cin>>a>>b;
    int d[a];
    string s;
        cin>>s;
    for(int i=1; i<a; i++){
        if(s[i-1]!=s[i]){
            c++;
            d[i]=c;
        }
        else
        d[i]=c;
    }
        d[0]=0;
            for(int i=a-1; i>=0; i--){
            if((i-(b-1))<0) break;
            
            int F=d[i]-d[i-b+1];
            
            if(s[i]=='0') 
                F++;
            sol = min(sol,F);
        }
    cout<<sol<<endl;
    }
}
