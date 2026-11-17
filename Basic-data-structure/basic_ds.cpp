#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vector<bool>v1(1002,false);
    for(int i =0;i<n;i++)
    {
        cin >> v[i];
        v1[v[i]] = true;
    }
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        if(v1[v[i] +1 ]  == true)
        {
            cnt++;
        }
    }
    cout << cnt <<'\n';
    return 0;
}