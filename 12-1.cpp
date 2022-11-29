//Lab12-1
#include<iostream>

using namespace std;
double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main() {
    int size;
    
    cout << "Enter size of array: ";
    cin >> size;
    cout << endl;

    int* a = new int[size];
    cout << "Enter " << size << " floating-point values: ";
    for (int i = 0; i < size; i++) {
        cin >> a[i];
        average(a[i], size);
    }
    return 0;
}

double average(double* a, int size) {
    int sum = 0;
    float avg;
    for (a = 0; a < size; a++) {
        sum += a[size];
    }
    avg = (float)sum / size;
}

double* maximum(double* a, int size) {
    int max = 0;
    if (n > max) {
        max = n;
    }
}

double* minimum(double* a, int size) {
    int min = 0;
    if (a < min) {
        min = n;
    }
}
