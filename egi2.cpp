#include <iostream>
#include <string>

using namespace std;

// Definisi simpul (node) untuk linked list
struct Node {
    string nama;
    string nim;
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
    void enqueue(string nama, string nim) {
        Node* newNode = new Node();
        newNode->nama = nama;
        newNode->nim = nim;
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
    void peek() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front element:\nNama: " << front->nama << "\nNIM: " << front->nim << endl;
    }

    // Fungsi untuk mengecek apakah antrian kosong
    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue q;
    q.enqueue("Egi Rizkiyansyah", "2311110042");
    q.enqueue("Naufal alif Anargya", "2311110041");
    q.enqueue("Abdul munib", "2311110004");

    q.peek();
    q.dequeue();
    q.peek();

    return 0;
}
