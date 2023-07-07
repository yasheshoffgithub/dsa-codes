class DynamicArray
{
private:
    int *data;
    int nextindex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextindex; i++)
        {
            this->data[i] = d.data[i];
        }
        // this->data = d.data;
        this->nextindex = d.nextindex;
        this->capacity = d.capacity;
    }
    void add(int x)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }

            delete[] data;
            data = newdata;
            capacity *= 2;
        }
        data[nextindex] = x;
        nextindex++;
    }
    int get(int i)
    {
        if (i < nextindex)
        {
            return data[i];
        }
        else
            return -1;
    }
    void add(int i, int element)
    {
        if (i < nextindex)
        {
            data[i] = element;
        }
        else if (i == nextindex)
        {
            data[i] = element;
            nextindex++;
        }
        else
            return;
    }
    void print()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};