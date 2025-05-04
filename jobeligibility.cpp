#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    if (age < 18) {
        cout << "Not eligible for job";
    }
    else if (age <= 54 && age >= 18) {
        cout << "eligible for job";
    }
    else if (age >= 55 && age <= 57) {
        cout << "eligible for job, but retirement soon";
    }
    if (age > 57) {
        cout << "retirement time";
    }
    return 0;
}