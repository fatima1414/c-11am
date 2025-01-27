// cout code of ARRAY

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row_size = 3;
//     int col_size = 4;
//     int arr[row_size][col_size];
//     // manually input
//     arr[0][0] = 11;
//     arr[0][1] = 22;
//     arr[0][2] = 44;
//     arr[0][3] = 45;
//     arr[1][0] = 14;
//     arr[1][1] = 63;
//     arr[1][2] = 58;
//     arr[1][3] = 79;
//     arr[2][0] = 47;
//     arr[2][1] = 58;
//     arr[2][2] = 79;
//     arr[2][3] = 20;
//     // manually print
//     cout << arr[0][0] << endl;
//     cout << arr[0][1] << endl;
//     cout << arr[0][2] << endl;
//     cout << arr[0][3] << endl;
//     cout << arr[1][0] << endl;
//     cout << arr[1][1] << endl;
//     cout << arr[1][2] << endl;
//     cout << arr[1][3] << endl;
//     cout << arr[2][0] << endl;
//     cout << arr[2][1] << endl;
//     cout << arr[2][2] << endl;
//     cout << arr[2][3] << endl;
// }

// //  #include<iostream>
// // using namespace std;
// // int main(){
// //     int row_size = 3;
// //     int col_size = 4;
// //     int arr[row_size][col_size];
// // // manually input
// //     arr[0][0] = 11 ;
// //     arr[0][1] = 22;
// //     arr[0][2] = 44;
// //     arr[0][3] = 45;
// //     arr[1][0] = 14;
// //     arr[1][1] = 63;
// //     arr[1][2] = 58;
// //     arr[1][3] = 79;
// //     arr[2][0] = 47;
// //     arr[2][1] =58 ;
// //     arr[2][2] =79 ;
// //     arr[2][3] =20 ;

// // // loop -> print ->2d array
// // // foreach -> not ok
// //     // for(int element : arr){
// //     //     cout<<element<<endl;
// //     // }
// //     // output

// //     for(int i = 0; i < row_size; i++){
// //         for(int j = 0; j < col_size; j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }
// }

// USER DEFINE (CIN CODE OF ARRY)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row_size = 3;
//     int col_size = 4;
//     int arr[row_size][col_size];
//     for (int i = 0; i < row_size; i++)
//     {
//         for (int j = 0; j < col_size; j++)
//         {
//             cout << "Row " << i << " index & Col " << j << " index :";
//             cin >> arr[i][j];
//         }
//         cout << endl;
//     }
//     // output

//     for (int i = 0; i < row_size; i++)
//     {
//         for (int j = 0; j < col_size; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// SUM OF ARRAY

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Define the dimensions of the array
//     const int rows = 2, cols = 3;

//     // Initialize the 2D array
//     int arr[rows][cols] = {
//         {1, 2, 3},
//         {4, 5, 6}};

//     // Calculate the sum
//     int totalSum = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             totalSum += arr[i][j];
//         }
//     }

//     // Output the result
//     cout << "The sum of the elements in the 2D array is: " << totalSum << endl;

//     return 0;
// }

//  the minimum number in a 2D array

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Define and initialize the 2D array
//     int arr[3][3] = {
//         {7, 2, 3},
//         {4, 8, 6},
//         {5, 1, 9}};

//     // Initialize minValue with a large value
//     int minValue = arr[0][0];

//     // Traverse the 2D array to find the minimum value
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] < minValue)
//             {
//                 minValue = arr[i][j];
//             }
//         }
//     }

//     // Output the result
//     cout << "The minimum number in the 2D array is: " << minValue << endl;

//     return 0;
// }

// // The maximum number in the 2D array

// #include <iostream>
// using namespace std;

// int main() {
//     // Define and initialize the 2D array
//     int arr[3][3] = {
//         {7, 2, 3},
//         {4, 8, 6},
//         {5, 1, 9}
//     };

//     // Initialize maxValue with a very small value
//     int maxValue = arr[0][0];

//     // Traverse the 2D array to find the maximum value
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (arr[i][j] > maxValue) {
//                 maxValue = arr[i][j];
//             }
//         }
//     }

//     // Output the result
//     cout << "The maximum number in the 2D array is: " << maxValue << endl;

//     return 0;
// }

// the even numbers in a 2D array

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Define and initialize the 2D array
//     int arr[3][3] = {
//         {7, 2, 3},
//         {4, 8, 6},
//         {5, 1, 9}};

//     cout << "Even numbers in the 2D array: ";

//     // Traverse the 2D array to find even numbers
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] % 2 == 0)
//             { // Check if the number is even
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }

//     return 0;
// }

//  the odd numbers in a 2D array

// #include <iostream>
// using namespace std;

// int main() {
//     // Define and initialize the 2D array
//     int arr[3][3] = {
//         {7, 2, 3},
//         {4, 8, 6},
//         {5, 1, 9}
//     };

//     cout << "Odd numbers in the 2D array: ";

//     // Traverse the 2D array to find odd numbers
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             if (arr[i][j] % 2 != 0) { // Check if the number is odd
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }

//     return 0;
// }

//  insert a value into a specific position in a 2D array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[2][2] = { {1, 2}, 
//                        {3, 4} }; // A simple 2x2 2D array

//     // Insert value at specific position
//     arr[1][0] = 99; // Insert 99 at row 1, column 0

//     // Display the updated array
//     cout << "Updated array:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// "delete" an element from a 2D array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[2][2] = { {1, 2}, {3, 4} }; // A simple 2x2 2D array

//     // Simulate deleting the element at position (1, 0)
//     arr[1][0] = 0;  // Set the value to 0 (or -1 or any value you want)

//     // Display the updated array
//     cout << "Updated array:" << endl;
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
