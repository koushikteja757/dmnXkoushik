#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0,h=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                h++;
                d++;
                c=max(c,h);
            }
            else
            {
                h=0;
            }
        }
        if(c>=3)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<d<<endl;
            
        }
    }
}