#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int found=0;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(int i=1;i<n;i++)
        {
            if(v[i-1]<=v[i])
            found+=1;
        }
        if(found==n-1||k>=2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}