#include <stdio.h>
#include <stdbool.h>

#define QUEUE_SIZE 5

int queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == QUEUE_SIZE - 1) { // Check if the queue is full
        printf("Queue is full! \n");
    } else {
        if (front == -1) {		 // If it's the first element being added
            front = 0; 			// Initialize front
        }
        rear++;
        queue[rear] = x;
        printf("Enqueued: %d\n", x);
    }
}

void dequeue() {
    if (front == -1 || front > rear) { // Check if the queue is empty
        printf("Queue is empty!\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
        // Reset front and rear if the queue becomes empty after dequeuing
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void print_queue() {
    if (front == -1) { // Check if the queue is empty
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int a = front; a <= rear; a++) {
            printf("%d ", queue[a]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(20);
    enqueue(40);
    enqueue(34);
    enqueue(63);
    enqueue(690);
    enqueue(1000); // This should trigger "Queue is full!"
    print_queue();

    dequeue();
    dequeue();
    print_queue();
	
    return 0;
}
