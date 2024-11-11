#include <iostream>
using namespace std;

class ArraySorter {
private:
    int* arr;
    int size;

public:
    ArraySorter(int arrSize) {
        size = arrSize;
        arr = new int[size];
    }

    ~ArraySorter() {
        delete[] arr;
    }

    void fillArray() {
        cout << "Enter " << size << " integers:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void sortArray() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = i + 1; j < size; j++) {
                if (*(arr + i) > *(arr + j)) {
                    int temp = *(arr + i);
                    *(arr + i) = *(arr + j);
                    *(arr + j) = temp;
                }
            }
        }
    }

    void printArray() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    ArraySorter sorter(size);
    sorter.fillArray();

    cout << "Sorted array: ";
    sorter.sortArray();
    sorter.printArray();

    return 0;
}

