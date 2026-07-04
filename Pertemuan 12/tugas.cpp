#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>

#define MAX 100005
#define INF INT_MAX

using namespace std;

vector<pair<int, int>> adj[MAX];
bool vis[MAX];
int dist[MAX];
int parent[MAX];

// Algoritma Dijkstra
void dijkstra(int start)
{
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < MAX; i++)
    {
        dist[i] = INF;
        parent[i] = -1;
    }

    dist[start] = 0;

    priority_queue<pair<int, int>,
                   vector<pair<int, int>>,
                   greater<pair<int, int>>> pq;

    pq.push({0, start});

    while (!pq.empty())
    {
        pair<int, int> p = pq.top();
        pq.pop();

        int x = p.second;

        if (vis[x])
            continue;

        vis[x] = true;

        for (int i = 0; i < adj[x].size(); i++)
        {
            int e = adj[x][i].first;
            int w = adj[x][i].second;

            if (dist[x] + w < dist[e])
            {
                dist[e] = dist[x] + w;
                parent[e] = x;        // Simpan asal node
                pq.push({dist[e], e});
            }
        }
    }
}

// Fungsi mencetak path
void printPath(int node)
{
    if (node == -1)
        return;

    printPath(parent[node]);

    cout << node;

    if (node != 5) // tujuan = node 5
        cout << " -> ";
}

int main()
{
    // Graph

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[2].push_back({3, 2});
    adj[3].push_back({2, 2});

    adj[3].push_back({4, 4});
    adj[4].push_back({3, 4});

    adj[3].push_back({5, 5});
    adj[5].push_back({3, 5});

    int start = 1;
    int tujuan = 5;

    dijkstra(start);

    cout << "Shortest distance from node "
         << start << " to node "
         << tujuan << " = "
         << dist[tujuan] << endl;

    cout << "Path: ";
    printPath(tujuan);
    cout << endl;

    return 0;
}