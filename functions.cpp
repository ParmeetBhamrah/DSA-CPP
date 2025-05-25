#include <bits/stdc++.h>
using namespace std;

// void printName(string name) {
//     cout << "Hey " << name << "!";
// }

// int main() {
//     string name;
//     cin >> name;
//     printName(name);
// }

int summation(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int res = summation(n1, n2);
    cout << res;
    return 0;
}