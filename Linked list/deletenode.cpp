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

node *deletenode(node *head, int i)
{
    if (head == NULL)
        return NULL;
    if (i == 0)
    {
        node *temp = head;
        temp = temp->next;
        delete head;
        return temp;
    }
    node *temp = head;
    int ct = 0;
    while (temp != nullptr && ct < i)
    {
        temp = temp->next;
        ct++;
    }
    if (temp != nullptr)
    {
        node *a = temp->next;
        delete a->next;
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
    int i;
    cin >> i;
    node *head = deletenode(head, i);
    print(head);
    return 0;
}