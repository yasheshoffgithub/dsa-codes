#include <iostream>
using namespace std;
#include "class.h"

void printtree(Binarytreenode<int> *root)
{
    if (root == NULL)
        return;

    cout << root->data;
    if (root->left != nullptr)
    {
        cout << "L" << root->left->data;
    }
    if (root->right != nullptr)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    printtree(root->left);
    printtree(root->right);
}
void inorder(Binarytreenode<int> *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Binarytreenode<int> *takeinput()
{
    int rootdata;
    cout << "enter data" << endl;
    cin >> rootdata;
    if (rootdata == -1)
        return nullptr;
    Binarytreenode<int> *root = new Binarytreenode<int>(rootdata);
    Binarytreenode<int> *leftchild = takeinput();
    Binarytreenode<int> *rightchild = takeinput();
    root->left = leftchild;
    root->right = rightchild;
    return root;
}
int main()
{
    // Binarytreenode<int> *root = new Binarytreenode<int>(1);
    // Binarytreenode<int> *node1 = new Binarytreenode<int>(2);
    // Binarytreenode<int> *node2 = new Binarytreenode<int>(3);
    // root->left = node1;
    // root->right = node2;
    Binarytreenode<int> *root = takeinput();
    printtree(root);
    inorder(root);
    delete root;
    return 0;
}
