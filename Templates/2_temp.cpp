#include<iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int intArr[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    
    float floatArr[] = {4.3, 1.2, 9.8, 2.1, 3.6};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);

    
    cout << "Unsorted Integer Array: ";
    printArray(intArr, intSize);
    sortArray(intArr, intSize);
    cout << "Sorted Integer Array: ";
    printArray(intArr, intSize);

    
    cout << "Unsorted Float Array: ";
    printArray(floatArr, floatSize);
    sortArray(floatArr, floatSize);
    cout << "Sorted Float Array: ";
    printArray(floatArr, floatSize);

    return 0;
}

