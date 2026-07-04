#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

// Class to represent a graph
class Graph {
private:
    int numVertices; // Number of vertices
    list<int>* adj;   // Adjacency list

public:
    // Constructor
    Graph(int V) {
        numVertices = V;
        adj = new list<int>[V];
    }

    // Function to add an edge to the graph
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v's list
        // For an undirected graph, add this line too:
        // adj[w].push_back(v);
    }

    // Function to perform Breadth-First Search (BFS)
    void BFS(int startNode) {
        // Mark all the vertices as not visited
        vector<bool> visited(numVertices, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current node as visited and enqueue it
        visited[startNode] = true;
        q.push(startNode);

        cout << "Breadth-First Traversal (starting from vertex " << startNode << "): ";

        while (!q.empty()) {
            // Dequeue a vertex from queue and print it
            int currNode = q.front();
            cout << currNode << " ";
            q.pop();

            // Get all adjacent vertices of the dequeued vertex currNode
            // If an adjacent vertex has not been visited,
            // then mark it visited and enqueue it
            for (int neighbor : adj[currNode]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    // Create a graph with 6 vertices (0 to 5)
    Graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);

    // Perform BFS starting from vertex 0
    g.BFS(0); // Expected: 0 1 2 3 4 5

    // Another example starting from a different node (if desired, uncomment below)
    // Graph g2(4);
    // g2.addEdge(0, 1);
    // g2.addEdge(0, 2);
    // g2.addEdge(1, 2);
    // g2.addEdge(2, 0);
    // g2.addEdge(2, 3);
    // g2.addEdge(3, 3);
    // g2.BFS(2); // Expected: 2 0 3 1

    return 0;
}