#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt =0,flag =0;
        for(int i =0;i<s.size() ;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')
            {
                cnt =0;
            }
            else
            {
                cnt++;
            }
            if(cnt == 4)
            {
                flag =1;
            }
            
        }
        if(flag == 1)
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