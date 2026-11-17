
#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;

        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
                cin >> v[i];
        }
        sort(v.begin(),v.end());
        int m;
        cin >> m;
        while (m--)
        {
                int k;
                cin >> k;
                int l = 0, r = n - 1;
                int flag =0;
                while (l <= r)
                {
                        int mid = (l + r) / 2;
                        
                        if (k == v[mid])
                        {
                                cout << "YES" << '\n';
                                flag =1;
                                break;
                        }
                        else if (k > v[mid])
                        {
                                l = mid + 1;
                        }
                        else
                        {
                                r = mid - 1;
                        }
                }
                if(flag == 0)
                {
                        cout << "NO" << '\n';
                }
        }

        return 0;
}
