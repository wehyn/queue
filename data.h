#pragma once
#define MAX_SIZE 100

class Queue {
private:
    int front, rear, size;
    int arr[MAX_SIZE];

public:
    Queue();

    bool isEmpty();
    bool isFull();
    void enqueue(int x);
    int dequeue();
    int getSize();
    void displayQueue();
    int getFront();
};
