#include <iostream>
#include "treenodeclass.h"
#include <queue>
using namespace std;
treenode<int> *takeinputlevelwise()
{
    int rootdata;
    cout << "enter root data" << endl;
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);

    queue<treenode<int> *> pendingnodes; // inbuilt queue
    pendingnodes.push(root);
    while (pendingnodes.size() != 0)
    {
        treenode<int> *front = pendingnodes.front();
        pendingnodes.pop();
        cout << "enter no of children of" << front->data << endl;
        int numchild;
        cin >> numchild;
        for (int i = 0; i < numchild; i++)
        {
            int childData;
            cout << "enter child" << i << " of " << front->data << endl;

            cin >> childData;
            treenode<int> *child = new treenode<int>(childData); // dynamic all req otherwise it will be a local variable
            front->children.push_back(child);
            pendingnodes.push(child);
        }
    }
    return root;
}
treenode<int> *takeinput()
{
    int rootdata;
    cout << "enter data";
    cin >> rootdata;
    treenode<int> *root = new treenode<int>(rootdata);
    int n;
    cout << "enter no. of children" << rootdata << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        treenode<int> *child = takeinput();
        root->children.push_back(child);
    }
    return root;
}

void printLevelWise(treenode<int> *root)
{
    // Write your code here
    if (root == nullptr)
        return;
    queue<treenode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        treenode<int> *curr = q.front();
        q.pop();
        cout << curr->data << ':';
        int childCount = curr->children.size();
        if (childCount)
        {
            cout << curr->children[0]->data;
            q.push(curr->children[0]);
        }
        for (int i = 1; i < childCount; i++)
        {
            cout << ',' << curr->children[i]->data;
            q.push(curr->children[i]);
        }
        cout << endl;
    }
}

void print(treenode<int> *root)
{
    if (root == nullptr) // this is not the base case rather it is an edge case
        return;
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
}
int numnodes(treenode<int> *root)
{
    if (root == nullptr) // this is not the base case rather it is an edge case
        return 0;
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans = 1 + numnodes(root->children[i]);
    }
    return ans;
}
int main()
{
    // treenode<int>* root=new treenode<int>(1);
    // treenode<int>* node1=new treenode<int>(2);
    // treenode<int>* node2=new treenode<int>(3);
    // root->children.push_back(node1);
    // root->children.push_back(node2);
    treenode<int> *root = takeinputlevelwise();
    print(root);
    return 0;
}