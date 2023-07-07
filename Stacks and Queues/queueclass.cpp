template <typename T>

class queueusingarray
{
    T *data;
    int nextindex, firstindex, size, capacity;

public:
    queueusingarray(int s)
    {
        data = new T[s];
        nextindex = 0;
        firstindex = -1;
        size = 0;
        capacity = s;
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
        if (size == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        data[nextindex] = element;
        nextindex = (nextindex + 1) % capacity;
        if (firstindex == -1)
        {
            firstindex = 0;
        }
        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return data[firstindex];
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        T ans = data[firstindex];
        firstindex = (firstindex + 1) % capacity;
        size--;
        return ans;
    }
};