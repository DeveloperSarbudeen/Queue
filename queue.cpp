#include<iostream>
#define SIZE 5
using namespace std;

class Queue
{
    private:
    int items[SIZE], front, rear;
    public:
    
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if(front >= 0 && rear == SIZE-1) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if(front == -1) {
            return true;
        }
        return false;
    }

    void enqueue(int value) {
        if(isFull()) {
            cout<<"\nQueue is Full";
        } else {
            if(front == -1) front = 0;
            rear++;
            items[rear] = value;
        }
    }

    void dequeue() {
        int element;
        if(isEmpty()) {
            cout<<"\nQueue is Empty";
        } else {
            element = items[front];
            if(front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }

        }
    }

    void display() {
        if(isEmpty()) {
            cout<<"\nQueue is Empty";
        } else {
            cout<<"\nQueue Items\n";
            for(int i=front; i<=rear; i++)
            {
                cout<<items[i]<<" ";
            }
        }
    }
};

int main() {
    Queue q;
    q.enqueue(12);
    q.enqueue(11);
    q.enqueue(43);
    q.enqueue(98);
    q.enqueue(54);
    q.dequeue();
    q.enqueue(56);
    q.display();
    return 0;
}