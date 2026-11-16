#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >>n >>m;
    vector<int>v(n);
    vector<long long>pre(n+1);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    pre[0] = 0;
    for(int i=1;i<=n;i++)
    {
        pre[i] = pre[i-1]+v[i-1];
    }
    while(m--)
    {
        int l,r;
        long long sum=0;
        cin >> l >> r;
        sum = pre[r] - pre[l-1];
        cout << sum << '\n';
    }
    return 0;
}