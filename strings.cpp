#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Parmeet";
    int length = s.size();
    cout << s[0];
    s[length-1] = 'e';
    cout << s[length-1];
    return 0;
}