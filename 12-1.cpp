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

    double* arr = new double[size];
    cout << "Enter " << size << " floating-point values: ";
    for (n = 0; n < size; n++) {
        cin >> arr[n];
    }

    double avg = average(arr, size);
    cout << "Average is " << avg << endl;

    double max = *maximum(arr, size);

    double min = *minimum(arr, size);
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
    double max = *a;
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    if (size == 0) {
        return 0;
    }
    else {
        cout << "Maximum value is element #" << index << ": " << max << endl;
    }
}

double* minimum(double* a, int size) {
    double min = *a;
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
            index = i;
        }
    }
    if (size == 0) {
        return 0;
    }
    else {
        cout << "Minimum value is element #" << index << ": " << min << endl;
    }
}
