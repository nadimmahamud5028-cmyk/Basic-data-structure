#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector<int>v(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    while(q--)
    {
        int l,r,sum =0;
        cin >> l >> r;
        for(int i =l;i <=r;i++)
        {
            sum+=v[i];
        }
        cout << sum <<'\n';
    }
    return 0;
}