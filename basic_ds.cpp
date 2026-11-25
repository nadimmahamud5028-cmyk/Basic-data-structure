#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val= val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void doubly_linked_list(Node*&head,Node*&tail,int val)
{
    Node*newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    head->prev= newnode;
    newnode->next=head;
    head = newnode;
}

void print_ll(Node*&head)
{
    Node*tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val<< " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node*head = new Node(10);
    Node*a = new Node(20);
    Node*tail = new Node(30);
    
    head->next=a;
    a->prev= head;

    a->next=tail;
    tail->prev= a;

    doubly_linked_list(head,tail,5);
    print_ll(head);
    return 0;
}