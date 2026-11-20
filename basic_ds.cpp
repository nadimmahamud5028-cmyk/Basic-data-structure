#include<bits/stdc++.h>
using namespace std;
class Node
{
        public:
                int val;
                Node* next;
};
int main()
{
    Node a,b,c;
    a.val = 10;
    b.val = 20;
   

    a.next = &b;
   
    b.next = NULL;

    cout << a.val <<" "  << b.val <<'\n';
    
    return 0;
}