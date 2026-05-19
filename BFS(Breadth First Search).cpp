#include<iostream>
using namespace std;

int main() {

    int graph[10][10], visited[10];
    int queue[10];
    int n, start;
    int front = 0, rear = 0;

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

    // BFS
    queue[rear] = start;
    rear++;

    visited[start] = 1;

    cout << "BFS Traversal : ";

    while(front < rear) {

        int current = queue[front];
        front++;

        cout << current << " ";

        for(int i = 0; i < n; i++) {

            if(graph[current][i] == 1 && visited[i] == 0) {

                queue[rear] = i;
                rear++;

                visited[i] = 1;
            }
        }
    }

    return 0;
}