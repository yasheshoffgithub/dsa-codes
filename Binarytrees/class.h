#include <vector>
using namespace std;

template <typename T>
class Binarytreenode
{
public:
    T data;
    Binarytreenode *left = NULL;
    Binarytreenode *right = NULL;
    Binarytreenode(T data)
    {
        this->data = data;
    }
    ~Binarytreenode()
    {
        delete left;
        delete right;
    }
};