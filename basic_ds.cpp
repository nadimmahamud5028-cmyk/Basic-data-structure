#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail_op(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_ll(Node *head)
{
    Node *tmp = head;
    if(tmp == NULL)
    {
        return;
    }
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << '\n';
}
void dlt_head(Node*&head,Node*&tail)
{
    if(head == NULL)
    {
        return;
    }
    Node*dltnode =head;
    head = head->next;
     if(head == NULL)
    {
        tail = dltnode;
    }

}
int main()
{
    Node *head = NULL;

    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail_op(head, tail, val);
    }
    dlt_head(head,tail);
    print_ll(head);
    return 0;
}