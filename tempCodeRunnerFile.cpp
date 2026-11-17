#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,cnt =0;
        cin >> n >> m;
        string s1,s2;
        cin >> s1 >> s2;
        int mn = min(s1.size(),s2.size());
        for(int i = 0;i< mn ;i++)
        {
                if(s1[i] == s2[i])
                {
                        cnt++;
                }
                else
                {
                        break;
                }
        }
        for(int i=0;i<cnt;i++)
        {
                cout << s1[i] ;
        }
        cout << '\n';
    }
    return 0;
}