template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->next = data;
        next = nullptr;
    }
};
template <typename T>
class queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    queue()
    {
        head = tail = nullptr;
        size = 0;
    }
    int getsize()
    {
        return size;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enqueue(T element)
    {
        Node<T> *newnode = new Node<T>(element);
        if (size == 0)
        {
            head = tail = newnode;
        }
        tail->next = newnode;
        tail = newnode;
        size++;
    }
    T front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
    T dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
};
