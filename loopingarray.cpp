#include <bits/stdc++.h>
using namespace std;

void doSomething(int a[], int n) {
    a[0] += 100;
    cout << "Value of arr[0] from the function: " << a[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "Value of arr[0] from the main function: " << arr[0] << endl; 
    cout << "This implies that the value of the original array changes if it is altered inside of a user defined function even if the array is not explicitly passed by reference in the code";
    return 0;
}