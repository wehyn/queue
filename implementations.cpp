#include <iostream>
#include "data.h"
using namespace std;

Queue::Queue() {
    front = rear = -1;
    size = 0;
}

bool Queue::isEmpty() {
    if (rear == -1 && front == -1 && first_loop != 1) {
        cout << "\nQueue is empty!" << endl;
		return true;
	}    
	return false;
}

bool Queue::isFull() { 
    if (rear != -1 && rear == MAX_SIZE - 1) {
		cout << "\nError: Queue is full!" << endl;
        return true;
    }
    return false;
}

void Queue::enqueue(int x) {
    if (isFull()) {
        cout << "\nError: Queue is full!" << endl;
        return;
    }

    else {
        rear++;
    }

    arr[rear] = x;
    size++;
}

int Queue::dequeue() {
    if (isEmpty()) return -1;

    int x = arr[front];
    if (front == rear) {
        front = rear = -1;
    }
    else {
        front++;
    }

    size--;
    return x;
}

int Queue::getSize() {
    return size;
}

void Queue::displayQueue() {
    if (isEmpty()) return;
    else {
        for (int i = front; i <= rear; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

int Queue::getFront() {
    if (isEmpty()) return -1;
    return arr[front];
}