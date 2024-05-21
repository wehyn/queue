#include <iostream>
#include "data.h"
using namespace std;

Queue::Queue() {
    front = rear = -1;
    size = 0;
}

bool Queue::isEmpty() { //kristian
    if (rear == -1 && front == -1) {
        cout << "Queue is empty" << endl;
		return true;
	}    
	return false;
}

bool Queue::isFull() { //kristian
    if (rear != -1 && rear == MAX_SIZE - 1) {
		cout << "Queue is full" << endl;
        return true;
    }
    return false;
}

void Queue::enqueue(int x) {
    if (isFull()) {
        cout << "Error: Queue is full!" << endl;
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    }
    else {
        rear++;
    }

    arr[rear] = x;
    size++;
}

int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty!" << endl;
        return -1;
    }

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

void Queue::displayQueue() { //kristian
    if (isEmpty()) {
        cout << "Error: Queue is empty!" << endl;
    }
    else {
        for (int i = front; i <= rear; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

int Queue::getFront() {
    //TODO
    cout << "This is getFront function" << endl;
    return 0;
}