#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    vector<int>v(n+1);
    vector<long long>pre(n+1);
    for(int i =1;i<=n;i++)
    {
        cin >> v[i];
    }
    pre[1] = v[1];
    for(int i=2;i<=n;i++)
    {
        pre[i] = pre[i-1] + v[i];
    }
    while(m--)
    {
        int l,r;
        long long sum=0;
        cin >> l >> r;
        if(l == 1)
        {
                sum = pre[r];
        }
        else
        {
                sum = pre[r] - pre[l-1];
        }
        cout << sum << '\n';
    }
    return 0;
}