#include <iostream>
using namespace std;
#include "llist1class.cpp"
 void print(node *head)
    {
        // node *temp = head;
        while (head != nullptr)
        {
            cout << head->data << " ";
            head = head->next;
        }
        // temp = head;
    }
int main()
{
    // statically
    node n1(1);
    node *head = &n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    // print(head);
    print(head); // this will again print the LL bcz main k head is safe
    // dynamically
    /* node *n3= new node(10);
     node *head=n3;
     node *n4= new node(20);
     n3->next= n4; */
    return 0;
}