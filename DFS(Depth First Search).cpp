#include<iostream>
using namespace std;

int graph[10][10], visited[10], n;

// DFS function
void DFS(int vertex) {

    cout << vertex << " ";
    visited[vertex] = 1;

    for(int i = 0; i < n; i++) {

        if(graph[vertex][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {

    int start;

    cout << "Enter number of vertices : ";
    cin >> n;

    // Input adjacency matrix
    cout << "Enter adjacency matrix : \n";

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    // Initialize visited array
    for(int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    cout << "Enter starting vertex : ";
    cin >> start;

    cout << "DFS Traversal : ";

    DFS(start);

    return 0;
}