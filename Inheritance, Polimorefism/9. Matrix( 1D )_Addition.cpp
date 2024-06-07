#include <iostream>
using namespace std;
/* 9. Write a Program of Two 1D Matrix Addition using Operator Overloading */
class Matrix {
private:
    int *data;

public:
    Matrix(int arr1[], int arr2[], int n) {
        data = new int[n];
        for (int i = 0; i < n; i++) {
            data[i] = arr1[i] + arr2[i];
        }
    }

    ~Matrix() { delete[] data; }

    void display() {
        for (int i = 0; i < 3; i++) {
            cout << data[i] << " ";
        }
    }
};

int main() {
    
    int arr1[] = {1, 2, 3};
    int arr2[] = {6, 7, 8};

    Matrix mat(arr1, arr2, 3);

    cout << "Result: ";
    mat.display();
}

