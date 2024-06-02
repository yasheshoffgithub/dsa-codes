#include <bits/stdc++.h>
using namespace std;
class disjointset
{
    vector<int> rank, parent, size;

public:
    disjointset(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    int findUpar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUpar(parent[node]);
    }
    void unionBYRank(int u, int v)
    {
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if (ulp_u == ulp_v)
            return;
        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionBYSize(int u, int v)
    {
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

int main()
{
    disjointset ds(7);
    ds.unionBYSize(1, 2);
    ds.unionBYSize(2, 3);
    ds.unionBYSize(4, 5);
    ds.unionBYSize(6, 7);
    ds.unionBYSize(5, 6);
    // check if 3& 7 belong to same comp
    if (ds.findUpar(3) == ds.findUpar(7))
        return true;
    else
        return false;
    ds.unionBYSize(3, 7);
    if (ds.findUpar(3) == ds.findUpar(7))
        cout << "true";
    else
        cout << "false";
    return 0;
}