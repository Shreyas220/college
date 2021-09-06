#include<iostream>

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); 
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/ 
    int t;
    cin>>t;
    int a[300001];
    a[0]=0;
    for(int i=1;i<=300000;i++)a[i]=a[i-1]^i;
    while(t--)
    {
        string s;
        cin>>s;
        string a="0",b="0";
        for(int i=0;i<s.size();i+=2)a+=s[i];
        for(int i=1;i<s.size();i+=2)b+=s[i];
        int x=stoi(a);
        int y=stoi(b);
        if(x>1)x--;
        else x=1;
        if(y>1)y--;
        else y=1;
        cout<<(ll)x*y<<endl;

    }
    
    

}