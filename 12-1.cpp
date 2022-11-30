//Lab12-1
#include<iostream>
#include <cstdlib>
using namespace std;

double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main() {
    int size, n;
    cout << "Enter size of array: ";
    cin >> size;
    cout << endl;

    double* arr = new double(size);
    cout << "Enter " << size << " floating-point values: ";
    for (n = 0; n < size; n++) {
        cin >> arr[n];
    }

    cout << "Entered: ";
    for (n = 0; n < size; n++) {
        cout << arr[n] << " ";
    }
    cout << endl;

    double avg = average(arr, size);
    cout << "Average is " << avg << endl;
    cout << endl;

    maximum(arr, size);
    cout << endl;

    minimum(arr, size);
    cout << endl;
}

double average(double* a, int size) {
    double sum = 0;
    double avg;
    for (int n = 0; n < size; n++) {
        sum += a[n];
    }
    avg = sum / size;
    return avg;
}

double* maximum(double* a, int size) {
    for (int i = 1; i < size; i++) {
        if(a < (a + i)) {
            a = (a + i);
        }
    }
    cout << "Maximum value is element #" << a;
}

double* minimum(double* a, int size) {
    
    cout << "Minimum value is element #" << a;
}
