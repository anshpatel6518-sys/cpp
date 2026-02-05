 #include <iostream>
using namespace std;

class Array {
    int* arr;
    int size;

public:
    Array(int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a1(5);
    a1.display();
    return 0;
}
