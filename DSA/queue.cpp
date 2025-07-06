#include<iostream>

using namespace std;

//queue follows FIFO(first in first out)

void enqueue(int arr[], int data, int &rear, int size)
{
    if (rear >= size) {
        cout << "Queue overflow" << endl;
        return;
    }
    arr[rear++] = data;
}

int dequeue(int arr[], int rear, int &front)
{
    if (front == rear) {
        cout << "Queue underflow" << endl;
        return -1;
    }
    int data = arr[front++];
    return data;

}

void display(int arr[], int front, int rear)
{
    if (front == rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i < rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 5;
    int arr[5];
    int front = 0;
    int rear = 0;

    enqueue(arr,2,rear,5);
    enqueue(arr,3,rear,5);
    enqueue(arr,4,rear,5);

    display(arr,front,rear);

    dequeue(arr,rear,front);

    display(arr,front,rear);

}