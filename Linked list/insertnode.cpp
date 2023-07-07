#include <iostream>
using namespace std;
#include "llist1class.cpp"
node *takeinput()
{
    int data;
    cin >> data;
    node *head = nullptr;
    node *tail = nullptr;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}
node *insertnode(node *head, int i, int data)
{
    node *newnode = new node(data);
    int ct = 0;
    node *temp = head;
    if (i == 0)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    while (temp != nullptr && ct < i - 1)
    {
        temp = temp->next;
        ct++;
    }
    if (temp != nullptr)
    {
        node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    temp = head;
    cout << endl;
}
int main()
{
    node *head = takeinput();
    print(head);
    head = insertnode(head, 2, 2);
    print(head);
    return 0;
}
