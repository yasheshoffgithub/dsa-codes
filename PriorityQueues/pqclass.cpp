#include <iostream>
using namespace std;
#include <vector>
class PriorityQ
{
    vector<int> pq;

public:
    PriorityQ()
    {
    }
    int getMin()
    {
        if (pq.size() == 0)
            return 0;
        return pq[0];
    }
    bool isEmpty()
    {
        return pq.size() == 0;
    }
    void insert(int data)
    {
        pq.push_back(data);
        int childidx = pq.size() - 1;

        while (childidx > 0)
        {
            int parentidx = (childidx - 1) / 2;

            if (pq[childidx] < pq[parentidx])
            {
                int temp = pq[childidx];
                pq[childidx] = pq[parentidx];
                pq[parentidx] = temp;
            }
            else
                break;
            childidx = parentidx;
        }
    }

    int removeMin()
    {
        if (pq.size() == 0)
            return -1;

        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq[pq.size() - 1] = ans;
        pq.pop_back();

        int parentidx = 0;
        int leftidx = 2 * parentidx + 1;
        int rightidx = 2 * parentidx + 2;

        while (leftidx < pq.size())
        {
            int minidx = parentidx;

            if (pq[minidx] > pq[leftidx])
            {
                minidx = leftidx;
            }
            if (rightidx < pq.size() && pq[minidx] > pq[rightidx])
            {
                minidx = rightidx;
            }
            if (minidx == parentidx)
                break;
            int temp = pq[minidx];
            pq[minidx] = pq[parentidx];
            pq[parentidx] = temp;

            parentidx = minidx;
            leftidx = 2 * parentidx + 1;
            rightidx = 2 * parentidx + 2;
        }
        return ans;
    }
} int main()
{

    return 0;
}