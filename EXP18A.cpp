// EXPERIMENT 18A : Queue and Dequeue

#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front,rear;

    public:
        Queue(){
            front =-1;
            rear =-1;
        }
    void enqueue(int value){
        if (rear == SIZE-1){
            cout << "Queue overflow!" << endl;
            return;
        }
        if (front == 1){
            cout << "Queue underflow!" << endl;
            return;
        }
    }
    void dequeue(){
        if (front == -1 || front > rear){
            cout << "Queue Undeflow!" << endl;
            return;
        }
        cout << arr[front] << "removed from queue." << endl;
        front ++;
    }
        void display(){
            if (front == -1 || front > rear){
                cout << "Queue is empty." << endl;
                return;
            }
            cout << "Queue elements : ";
            for (int i = front; i<= rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    };


int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    return 0;
}

/*
OUTPUT :
Queue is empty.
Queue Undeflow!
Queue is empty.
*/
