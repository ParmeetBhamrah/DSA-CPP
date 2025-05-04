#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age < 18) {
        cout << "Not an adult.";
    }
    else {
        cout << "You are an adult.";
    }
    return 0;
}