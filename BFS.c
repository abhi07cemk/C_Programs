#include <stdio.h>

#define MAX 10

int queue[MAX], front = -1, rear = -1;
int adj[MAX][MAX], visited[MAX], n;

// Enqueue
void enqueue(int v) {
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = v;
}

// Dequeue
int dequeue() {
    if (front == -1)
        return -1;
    int item = queue[front++];
    if (front > rear)
        front = rear = -1;
    return item;
}

void bfs(int start) {
    enqueue(start);
    visited[start] = 1;

    while (front != -1) {
        int i = dequeue();
        printf("%d ", i);

        for (int j = 0; j < n; j++) {
            if (adj[i][j] == 1 && visited[j] == 0) {
                enqueue(j);
                visited[j] = 1;
            }
        }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    bfs(0);   // Start from vertex 0
    return 0;
}
