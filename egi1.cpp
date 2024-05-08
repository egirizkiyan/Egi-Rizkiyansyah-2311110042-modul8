#include <iostream>

using namespace std;

// Definisi simpul (node) untuk linked list
struct Node {
    int data;
    Node* next;
};

// Definisi kelas Queue
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Fungsi untuk menambah elemen ke antrian
    void enqueue(int item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->next = nullptr;
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Fungsi untuk menghapus elemen dari antrian
    void dequeue() {
        if (front == nullptr) return;
        Node* temp = front;
        front = front->next;
        if (front == nullptr)
            rear = nullptr;
        delete temp;
    }

    // Fungsi untuk mendapatkan elemen di depan antrian
    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Fungsi untuk mengecek apakah antr
