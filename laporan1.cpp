# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Egi Rizkiyansyah</p>

## Dasar Teori
Queue adalah struktur data yang digunakan untuk menyimpan data dengan metode FIFO (First-In First-Out). Data yang pertama dimasukkan ke dalam queue akan menjad idata yang pertama pula untuk dikeluarkan dari queue. Queue  mirip dengan konsep antrian pada kehidupan sehari-hari, dimana konsumen yang datang lebih dulu akan
dilayani terlebih dahulu.Implementasi queue dapat dilakukan dengan menggunakan array atau linked list. Struktur data queue terdiri dari dua pointer yaitu front dan rear. Front/head adalah pointer ke elemen pertama dalam queue dan rear/tail/back adalah pointer ke elemen terakhir dalam queue. Perbedaan antara stack dan queue terdapat pada aturan penambahan dan penghapusan elemen. Pada stack, operasi penambahan dan penghapusan elemen dilakukan di satu
ujung. Elemen yang terakhir diinputkan akan berada paling dengan dengan ujung atau dianggap paling atas sehingga pada operasi penghapusan, elemen teratas tersebut akan dihapus paling awal, sifat demikian dikenal dengan LIFO.
Pada Queue, operasi tersebut dilakukan ditempat berbeda (melalui salah satu ujung) karena perubahan data selalu mengacu pada Head, maka hanya ada 1 jenis insert
maupun delete. Prosedur ini sering disebut Enqueue dan Dequeue pada kasus Queue.
Untuk Enqueue, cukup tambahkan elemen setelah elemen terakhir Queue, dan untuk
Dequeue, cukup "geser"kan Head menjadi elemen selanjutnya.

Operasi pada Queue
● enqueue() : menambahkan data ke dalam queue.
● dequeue() : mengeluarkan data dari queue.
● peek() : mengambil data dari queue tanpa menghapusnya.
● isEmpty() : mengecek apakah queue kosong atau tidak.
● isFull() : mengecek apakah queue penuh atau tidak.
● size() : menghitung jumlah elemen dalam queue.

## Guided 

### 1. [Program Input Operasi pada Queue]

```C++
#include <iostream>
using namespace std;
const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda antrian
int back = 0; // Penanda
string queueTeller[5]; // Fungsi pengecekan
bool isFull() { // Pengecekan antrian penuh atau tidak
if (back == maksimalQueue) {
return true; // =1
} else {
return false;
}
}
bool isEmpty() { // Antriannya kosong atau tidak
if (back == 0) {
return true;
} else {
return false;
}
}
void enqueueAntrian(string data) { // Fungsi menambahkan antrian
if (isFull()) {
cout << "Antrian penuh" << endl;
} else {
if (isEmpty()) { // Kondisi ketika queue kosong
queueTeller[0] = data;
front++;
back++;
} else { // Antrianya ada isi
queueTeller[back] = data;
back++;
}
}
}
void dequeueAntrian() { // Fungsi mengurangi antrian
if (isEmpty()) {
cout << "Antrian kosong" << endl;
} else {
for (int i = 0; i < back; i++) {
queueTeller[i] = queueTeller[i + 1];
}
back--;
}
}
int countQueue() { // Fungsi menghitung banyak antrian
return back;
}
void clearQueue() { // Fungsi menghapus semua antrian
if (isEmpty()) {
cout << "Antrian kosong" << endl;
} else {
for (int i = 0; i < back; i++) {
queueTeller[i] = "";
}
back = 0;
front = 0;
}
}
void viewQueue() { // Fungsi melihat antrian
cout << "Data antrian teller:" << endl;
for (int i = 0; i < maksimalQueue; i++) {
if (queueTeller[i] != "") {
cout << i + 1 << ". " << queueTeller[i] <<
endl;
} else {
cout << i + 1 << ". (kosong)" << endl;
}
}
}
int main() {
enqueueAntrian("Andi");
enqueueAntrian("Maya");
viewQueue();
cout << "Jumlah antrian = " << countQueue() << endl;
dequeueAntrian();
viewQueue();
cout << "Jumlah antrian = " << countQueue() << endl;
clearQueue();
viewQueue();
cout << "Jumlah antrian = " << countQueue() << endl;
return 0;
}

```
#### Full code Screenshot:
![Screenshot 2024-05-09 034033](https://github.com/egirizkiyan/egi-baik/assets/162097461/2adb9520-738e-4aa2-9803-2dcb5df36919)

#### Output:
![Screenshot 2024-05-09 034236](https://github.com/egirizkiyan/egi-baik/assets/162097461/2dca2b01-b712-4d1d-b0f2-aabb2fbf381a)

Program yang Anda buat adalah implementasi sederhana dari struktur data antrian (queue) menggunakan array dalam bahasa C++. Mari kita ringkas kesimpulan dari program tersebut:

1. Inisialisasi dan Deklarasi: Program dimulai dengan mendeklarasikan konstanta maksimalQueue yang menentukan jumlah maksimal elemen dalam antrian, serta variabel front dan back yang merupakan penanda lokasi pertama dan terakhir dalam antrian. Selain itu, sebuah array queueTeller juga dideklarasikan untuk menyimpan elemen-elemen antrian.
2. Fungsi isFull() dan isEmpty(): Fungsi isFull() digunakan untuk memeriksa apakah antrian penuh atau tidak, sedangkan fungsi isEmpty() digunakan untuk memeriksa apakah antrian kosong atau tidak.
3. Fungsi enqueueAntrian(string data): Fungsi ini digunakan untuk menambahkan elemen baru ke dalam antrian. Jika antrian sudah penuh, program akan mencetak pesan "Antrian penuh". Jika antrian masih memiliki ruang kosong, elemen baru akan ditambahkan ke dalam antrian di posisi yang sesuai.
4. Fungsi dequeueAntrian(): Fungsi ini digunakan untuk menghapus elemen pertama dari antrian. Jika antrian kosong, program akan mencetak pesan "Antrian kosong". Jika tidak, elemen pertama akan dihapus, dan elemen-elemen lainnya akan digeser ke depan.
5. Fungsi countQueue(): Fungsi ini digunakan untuk menghitung jumlah elemen dalam antrian.
6. Fungsi clearQueue(): Fungsi ini digunakan untuk menghapus semua elemen dalam antrian dengan mengatur ulang penanda front dan back.
7. Fungsi viewQueue(): Fungsi ini digunakan untuk menampilkan seluruh elemen dalam antrian beserta indeksnya.
8. Fungsi main(): Di dalam fungsi main(), beberapa operasi antrian dilakukan untuk menguji fungsionalitas program. Operasi-operasi tersebut mencakup penambahan elemen ke antrian, penghapusan elemen dari antrian, dan penghapusan seluruh elemen dari antrian.

Program yang Anda buat merupakan langkah awal yang baik dalam memahami konsep antrian (queue) dan implementasinya dalam bahasa pemrograman C++. Dengan latihan lebih lanjut dan eksplorasi konsep yang lebih mendalam, Anda dapat mengembangkan program tersebut lebih lanjut atau membuat program-program lain yang lebih kompleks. Teruslah belajar dan eksperimen!

## Unguided 
### 1. [Soal]

```C++
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


```
#### Output:
![Screenshot 2024-05-09 034747](https://github.com/egirizkiyan/egi-baik/assets/162097461/c394d262-df1d-477d-bf81-e71773a8e23f)

#### Full code Screenshot:
![Screenshot 2024-05-09 034849](https://github.com/egirizkiyan/egi-baik/assets/162097461/58705373-4604-4d39-90f5-81734ce5b034)


Program yang Anda berikan adalah implementasi konsep antrian (queue) menggunakan linked list dalam bahasa C++. Mari kita berikan kesimpulan dari program tersebut:

1. Struktur Data Linked List: Program menggunakan struktur data linked list untuk menyimpan elemen-elemen antrian. Setiap elemen dalam antrian direpresentasikan oleh simpul (node) yang terdiri dari data (integer) dan pointer ke simpul berikutnya.
2. Definisi Kelas Queue: Kelas Queue dibuat untuk merepresentasikan antrian. Dalam kelas ini, terdapat dua pointer front dan rear yang menunjukkan elemen pertama dan terakhir dalam antrian.
3. Konstruktor: Konstruktor kelas Queue digunakan untuk menginisialisasi pointer front dan rear menjadi nullptr, menandakan bahwa antrian kosong saat pertama kali dibuat.
4. Fungsi enqueue(int item): Fungsi ini digunakan untuk menambahkan elemen baru ke dalam antrian. Setiap kali elemen baru ditambahkan, sebuah simpul baru dibuat, data diset ke nilai item, dan pointer next diset menjadi nullptr. Jika antrian masih kosong, front dan rear akan menunjuk ke simpul baru tersebut. Jika tidak, rear->next akan menunjuk ke simpul baru dan rear akan diperbarui menjadi simpul baru tersebut.
5. Fungsi dequeue(): Fungsi ini digunakan untuk menghapus elemen pertama dari antrian. Jika antrian kosong, tidak ada operasi yang dilakukan. Jika tidak, pointer front akan digeser ke simpul berikutnya. Jika elemen yang dihapus adalah elemen terakhir dalam antrian, pointer rear juga akan diperbarui menjadi nullptr.
6. Fungsi peek(): Fungsi ini digunakan untuk mendapatkan nilai elemen di depan antrian tanpa menghapusnya. Jika antrian kosong, program akan mencetak pesan "Queue is empty" dan mengembalikan nilai -1.
7. Kesimpulan: Program tersebut merupakan implementasi sederhana dari struktur data antrian menggunakan linked list. Dengan menggunakan linked list, penambahan dan penghapusan elemen di tengah antrian dapat dilakukan dengan efisien tanpa memerlukan pergeseran elemen-elemen lain seperti pada implementasi array. Ini memungkinkan program untuk memiliki performa yang lebih baik terutama pada operasi-operasi tambah dan hapus elemen dalam skala besar.

### 2. [Soal]

```C++

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

```
#### Output:
![Screenshot 2024-05-09 035222](https://github.com/egirizkiyan/egi-baik/assets/162097461/215708b1-faf9-4843-9fe5-0e197eae038b)


#### Full code Screenshot:
![Screenshot 2024-05-09 035351](https://github.com/egirizkiyan/egi-baik/assets/162097461/2fb4856f-8aa2-4279-aa51-71a9982fdb44)


Program di atas adalah implementasi sederhana dari konsep antrian (queue) menggunakan linked list dalam bahasa C++. Berikut adalah kesimpulan dari program tersebut:

1. Struktur Data Linked List: Program menggunakan struktur data linked list untuk menyimpan elemen-elemen antrian. Setiap elemen dalam antrian direpresentasikan oleh simpul (node) yang memiliki dua string, yaitu nama dan nim, serta pointer ke simpul berikutnya.
2. Definisi Kelas Queue: Kelas Queue digunakan untuk merepresentasikan antrian. Dalam kelas ini, terdapat dua pointer front dan rear yang menunjukkan elemen pertama dan terakhir dalam antrian.
3. Konstruktor: Konstruktor kelas Queue digunakan untuk menginisialisasi pointer front dan rear menjadi nullptr, menandakan bahwa antrian kosong saat pertama kali dibuat.
Fungsi enqueue(string nama, string nim): Fungsi ini digunakan untuk menambahkan elemen baru ke dalam antrian. Setiap kali elemen baru ditambahkan, sebuah simpul baru dibuat dengan nama dan nim yang sesuai, serta pointer next diset menjadi nullptr. Jika antrian masih kosong, front dan rear akan menunjuk ke simpul baru tersebut. Jika tidak, rear->next akan menunjuk ke simpul baru dan rear akan diperbarui menjadi simpul baru tersebut.
4. Fungsi dequeue(): Fungsi ini digunakan untuk menghapus elemen pertama dari antrian. Jika antrian kosong, tidak ada operasi yang dilakukan. Jika tidak, pointer front akan digeser ke simpul berikutnya. Jika elemen yang dihapus adalah elemen terakhir dalam antrian, pointer rear juga akan diperbarui menjadi nullptr.
5. Fungsi peek(): Fungsi ini digunakan untuk mendapatkan nilai elemen di depan antrian tanpa menghapusnya. Jika antrian kosong, program akan mencetak pesan "Queue is empty" dan mengembalikan nilai -1.
6. Fungsi isEmpty(): Fungsi ini digunakan untuk memeriksa apakah antrian kosong atau tidak.
Program di atas menunjukkan bagaimana konsep antrian bisa diterapkan dengan menggunakan linked list dalam bahasa C++. Dengan menggunakan linked list, operasi penambahan dan penghapusan elemen di tengah antrian dapat dilakukan dengan efisien.

## Kesimpulan
Program di atas merupakan implementasi sederhana dari struktur data antrian (queue) menggunakan linked list dalam bahasa C++. Berikut adalah kesimpulan dari program tersebut:

1. Struktur Data Linked List: Program menggunakan struktur data linked list untuk menyimpan elemen-elemen antrian. Setiap elemen dalam antrian direpresentasikan oleh simpul (node) yang memiliki dua string, yaitu nama dan nim, serta pointer ke simpul berikutnya.
2. Kelas Queue: Kelas Queue digunakan untuk merepresentasikan antrian. Dalam kelas ini, terdapat dua pointer front dan rear yang menunjukkan elemen pertama dan terakhir dalam antrian.
3. Penambahan Elemen: Fungsi enqueue(string nama, string nim) digunakan untuk menambahkan elemen baru ke dalam antrian. Setiap kali elemen baru ditambahkan, sebuah simpul baru dibuat dengan nama dan nim yang sesuai, serta pointer next diset menjadi nullptr. Jika antrian masih kosong, front dan rear akan menunjuk ke simpul baru tersebut. Jika tidak, rear->next akan menunjuk ke simpul baru dan rear akan diperbarui menjadi simpul baru tersebut.
4. Penghapusan Elemen: Fungsi dequeue() digunakan untuk menghapus elemen pertama dari antrian. Jika antrian kosong, tidak ada operasi yang dilakukan. Jika tidak, pointer front akan digeser ke simpul berikutnya. Jika elemen yang dihapus adalah elemen terakhir dalam antrian, pointer rear juga akan diperbarui menjadi nullptr.
5. Melihat Elemen Depan: Fungsi peek() digunakan untuk mendapatkan nilai elemen di depan antrian tanpa menghapusnya. Jika antrian kosong, program akan mencetak pesan "Queue is empty".
6. Pengecekan Antrian Kosong: Fungsi isEmpty() digunakan untuk memeriksa apakah antrian kosong atau tidak.
Program tersebut menunjukkan bagaimana konsep antrian bisa diterapkan dengan menggunakan linked list dalam bahasa C++. Dengan menggunakan linked list, operasi penambahan dan penghapusan elemen di tengah antrian dapat dilakukan dengan efisien.

## Referensi
[1] Data Structures and Algorithms in C++" by Michael T. Goodrich, Roberto Tamassia, and David M. Mount
[2] C++ Data Structures and Algorithms" by Wisnu Anggoro
[3] Problem Solving with Algorithms and Data Structures Using Python" by Bradley N. Miller and David L. Ranum