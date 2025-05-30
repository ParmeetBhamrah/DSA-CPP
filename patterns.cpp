// Steps to approach Pattern Problems
// 1. for the outer loop, count the no. of rows.
// 2. for the inner loop, focus on the columns and connect them somehow to the rows.
// 3. print the content insode the inner loop.
// 4. observe symmetry (optional - as per Q)

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    /*
    Pattern 1
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    /*
    Pattern 2
    * 
    * *
    * * *
    * * * * 
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    /*
    Pattern 3
    1
    1 2
    1 2 3
    1 2 3 4 
    */
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    /*
    Pattern 3
    1
    2 2
    3 3 3
    4 4 4 4 
    */
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    /*
    Pattern 5
    * * * * 
    * * *
    * *
    * 
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
   }
}

void pattern6(int n) {
    /*
    Pattern 6
    1 2 3 4 
    1 2 3
    1 2
    1
    */
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
   }
}

void pattern7(int n) {
    /*
    Pattern 7
        *    
      * * * 
    * * * * *
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i-1; j++) {
            cout << "  ";
        }
        for (int j = 0; j < ((2 * i) + 1); j++) {
            cout << "* ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        cout << endl;
    }
}

void pattern8(int n) {
    /*
    Pattern 8
    * * * * *
      * * * 
        *    
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < (((n - i) * 2) - 1); j++) {
            cout << "* ";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n) { // 7 and 8 merged
    /*
    Pattern 9
        *    
      * * * 
    * * * * *
    * * * * *
      * * * 
        *    
    */
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i-1; j++) {
            cout << "  ";
        }
        for (int j = 0; j < ((2 * i) + 1); j++) {
            cout << "* ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < (((n - i) * 2) - 1); j++) {
            cout << "* ";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) { // here n is the line with maximum number of stars
    /*
    Pattern 10
    * 
    * * 
    * * * 
    * * * * 
    * * * * * 
    * * * * 
    * * * 
    * * 
    *   
    */
    for (int i = 0; i < 2 * n - 1; i++) {
        int stars = i + 1;
        if (i > n - 1) {
            stars = 2 * n - i - 1;
        }
        for (int j = 0; j < stars; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n) {
    /*
    Pattern 11
    1
    0 1 
    1 0 1 
    0 1 0 1 
    1 0 1 0 1   
    */
    int start;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n) {
    /*
    Pattern 12
    1             1
    1 2         2 1
    1 2 3     3 2 1
    1 2 3 4 4 3 2 1
    */
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = 0; j <= i; j++) {
            cout << count << " ";
            count +=1;
        }
        for (int j = 0; j < (2 * n) - (2 * (i + 1)); j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            count -=1;
            cout << count << " ";
        }
        cout << endl;
    }
}

void pattern13(int n) {
    /*
    Pattern 13
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    */
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n) {
    /*
    Pattern 13
    A
    A B
    A B C
    A B C D
    A B C D E
    */
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

// void pattern_here_n_is_number_of_stars(int n) {
//     /*
//     Pattern
//     * * * * *
//       * * * 
//         *    
//     */
//     for (int i = 0; i < n - n/2; i++) {
//         for (int j = 0; j < i; j++) {
//             cout << "  ";
//         }
//         for (int j = 0; j < n - (2 * i); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

int main() {
    int t; // test cases
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        pattern14(n);
    }
    return 0;
}