#include <iostream>
using namespace std;

class Queue {
    int arr[5];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }
    void enqueue(int x) {
        if (rear == 4) {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
        cout << x << " enqueued to queue" << endl;
    }
    void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front++] << " dequeued from queue" << endl;
        if (front > rear) front = rear = -1;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();
 
    q.enqueue(40);
    q.display();

    return 0;
}

/*OUTPUT
10 enqueued to queue
20 enqueued to queue
30 enqueued to queue
Queue elements: 10 20 30 
10 dequeued from queue
Queue elements: 20 30 
40 enqueued to queue
Queue elements: 20 30 40 
*/
