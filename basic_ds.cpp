#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum =0,flag =0,flag2 =0;
        cin >> n;
        vector<int>v(n);
        for(int i= 0;i<n;i++)
        {
            cin >> v[i];
            if(v[i]%2 == 0)
            {
                flag =1;
            }
            if(v[i]%2 == 1)
            {
                flag2 =1;
            }
            sum+=v[i];
        }
        if(sum%2 == 0 && flag == 1)

        {
            cout <<"YES" <<'\n';
        }
        else if(sum%2 == 1 && flag2 == 1)
        {
            cout << "YES" <<'\n';
        }
        else
        {
            cout <<"NO" <<'\n';
        }

    }
    return 0;
}