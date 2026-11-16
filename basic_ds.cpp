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
    sort(v.begin(), v.end());

    int l = 0, r = n - 1;

    int s;
    cin >> s;
    int flag = 0;
    while (l <= r)
    {

        int mid = (l + r) / 2;

        if (v[mid] == s)
        {
            flag = 1;
            break;
        }
        else if (v[mid] > s)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "Found" << '\n';
    }
    else
    {
        cout << "Not found" << '\n';
    }
    return 0;
}