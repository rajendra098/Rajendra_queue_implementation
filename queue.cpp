#include <iostream>
#include <vector>

using namespace std;

class Queue {
private:
    vector<int> data;
public:
    void enqueue(int val) {
        data.push_back(val);
    }
    void dequeue() {
        if (data.empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        data.erase(data.begin());
    }
    int front() {
        return data.front();
    }
    int back() {
        return data.back();
    }
    int size() {
        return data.size();
    }
    bool empty() {
        return data.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    q.dequeue();
    cout << "Front element after dequeue: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue(); // Queue is empty now
    q.dequeue(); // Trying to dequeue from empty queue
    return 0;
}