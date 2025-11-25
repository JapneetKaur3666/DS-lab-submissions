#include <iostream>
using namespace std;

class MinPQ {
    int *arr;
    int capacity;
    int size;
public:
    MinPQ(int cap = 100) {
        capacity = cap;
        arr = new int[capacity];
        size = 0;
    }
    ~MinPQ(){ delete[] arr; }

    void push(int x) {
        if (size == capacity) return; 
        int i = size++;
        arr[i] = x;
        // bubble up
        while (i != 0) {
            int parent = (i-1)/2;
            if (arr[parent] <= arr[i]) break;
            swap(arr[parent], arr[i]);
            i = parent;
        }
    }

    int top() {
        if (size == 0) throw runtime_error("empty");
        return arr[0];
    }

    void pop() {
        if (size == 0) return;
        arr[0] = arr[--size];
        // heapify down
        int i = 0;
        while (true) {
            int l = 2*i + 1, r = 2*i + 2, smallest = i;
            if (l < size && arr[l] < arr[smallest]) smallest = l;
            if (r < size && arr[r] < arr[smallest]) smallest = r;
            if (smallest == i) break;
            swap(arr[i], arr[smallest]);
            i = smallest;
        }
    }

    bool empty() { return size == 0; }
};

int main() {
    MinPQ pq(50);
    pq.push(5); pq.push(2); pq.push(8); pq.push(1);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
    return 0;
}
