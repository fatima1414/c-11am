
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     // Loop through rows
//     for (int i = 1; i <= n; i++) {

//         // Print leading spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Print stars and spaces
//         for (int j = 1; j <= (2 * i - 1); j++) {

//             if (i == n) {
//                 cout << "*";  // Last row: full stars
//             } else {
//                 if (j == 1 || j == (2 * i - 1)) {
//                     cout << "*";  // Borders: print stars
//                 } else {
//                     cout << " ";  // Hollow space between stars
//                 }
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }