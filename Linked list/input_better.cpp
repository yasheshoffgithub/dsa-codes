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
            // node *temp=head;
            // while(temp->next!=nullptr){
            //     temp=temp->next;
            // }
            // temp ->next =newnode
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
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
}
int main()
{
    node *head = takeinput();
    print(head);
    return 0;
}