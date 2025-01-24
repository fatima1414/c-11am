
// array

// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;

//   int arr[n];

//   arr[0] = 10;
//   arr[1] = 20;
//   arr[2] = 30;
//   arr[3] = 40;
//   arr[4] = 50;
//   arr[5] = 60;
//   arr[6] = 70;
//   arr[7] = 80;
//   arr[8] = 90;
//   arr[9] = 100;

//   cout<<arr[0]<<endl;
//   cout<<arr[1]<<endl;
//   cout<<arr[2]<<endl;
//   cout<<arr[3]<<endl;
//   cout<<arr[4]<<endl;
//   cout<<arr[5]<<endl;
//   cout<<arr[6]<<endl;
//   cout<<arr[7]<<endl;
//   cout<<arr[8]<<endl;
//   cout<<arr[9]<<endl;

// }

// #include<iostream>
// using namespace std;
// int main(){
//   int n = 10;

//   int arr[n] ={10,20,30,40,50,60,70,80,90,100};

// // & SHOW THE ADDERES
//   cout<<arr[0]<<endl;
//   cout<<&arr[0]<<endl;

//   cout<<arr[1]<<endl;
//   cout<<&arr[1]<<endl;

//   cout<<arr[2]<<endl;
//   cout<<&arr[2]<<endl;

//   cout<<arr[3]<<endl;
//   cout<<&arr[3]<<endl;

//   cout<<arr[4]<<endl;
//   cout<<&arr[4]<<endl;

//   cout<<arr[5]<<endl;
//   cout<<&arr[5]<<endl;

//   cout<<arr[6]<<endl;
//   cout<<&arr[6]<<endl;

//   cout<<arr[7]<<endl;
//   cout<<&arr[7]<<endl;

//   cout<<arr[8]<<endl;
//   cout<<&arr[8]<<endl;

//   cout<<arr[9]<<endl;
//   cout<<&arr[9]<<endl;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;

//     int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

//     for (int i = 0; i < n; i++)

//     {
//         cout << "Element present at " << i << " index : " << arr[i] << endl;
//     }
// }

// USER INPUT//

// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cout<<"Enter element at "<<i<<" index : ";  // user help
//   cin>>arr[i];  // user se input liya hai
// }

// // print array

// for(int i = 0; i < n; i++){
//   cout<<"Element present at "<<i<<" index : ";  // user help
//   cout<<arr[i]<<endl;
// }
// }

// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cin>>arr[i];
// }

//   for(int i = 0; i < n; i++){
//     cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }
// // print array

// for(int i = 0; i < n; i++){
//   cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){

// int arr[] = {10,20,30,40,50,60,70,80,90};

// // sizeof()

// int size = sizeof(arr);

// cout<<size<<endl;

// int length = sizeof(arr)/sizeof(arr[0]);

// cout<<"Length : "<<length<<endl;

// // print array

// for(int i = 0; i < length; i++){
//   cout<<arr[i]<<" ";
// }
// }

// SEARCH OF ARRAY//
//  #include <iostream>
//  using namespace std;

// int main()
// {

//     int n = 8;

//     int arr[n] = {10, 20, 30, 40, 50, 60, 70, 60};

//     int key = 60;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             cout << "Element present in array at " << i << " index! " << endl;
//         }
//     }
// }

// maximum value of an array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 5, 40, 25};
//     // int n = sizeof(arr) / sizeof(arr[0]);
//     int maxValue = arr[0]; // Initialize with the first element

//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > maxValue) {
//             maxValue = arr[i];
//         }
//     }
//     cout << "Maximum value in the array is: " << maxValue << endl;
//     return 0;
// }

// 2WAY OF MAXVALUE IN ARRAY

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int main()
// {

//     int arr[8] = {10, 3, 5, 8, 2, 85, 3, 96};

//     int maxValue = INT_MIN;

//     for (int i = 0; i < 8; i++)
//     {
//         if (arr[i] > maxValue)
//         {
//             maxValue = arr[i];
//         }
//     }

//     cout << "Max Value : " << maxValue << endl;
// }

// Minimum value in the array 1 way
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {10, 20, 5, 40, 25};
//     int minValue = arr[0]; // Initialize with the first element

//     for (int i = 1; i < 4; i++) {
//         if (arr[i] < minValue) {
//             minValue = arr[i];
//         }
//     }

//     cout << "Minimum value in the array is: " << minValue << endl;
//     return 0;
// }

// 2 WAY OF MINVALUE OF ARRAY

// #include<iostream>
// #include<limits.h>

// or

// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {

// //     int arr[8] = {10, 3, 5, 8, 2, 85, 3, 96};

// //     int minValue = INT_MAX;

// //     for (int i = 0; i < 8; i++)
// //     {
// //         if (arr[i] < minValue)
// //         {
// //             minValue = arr[i];
// //         }
// //     }

// //     cout << "Min Value : " << minValue << endl;
// }

// SUM OF ARRAY
// #include <iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

//     for (int i = 0; i < 8; i++)
//     {
//         sum += arr[i]; // Add each element to the sum
//         cout << "Current sum: " << sum << endl;
//     }

//     cout << "Total sum: " << sum << endl; // Output the final sum
//     return 0;
// }

// SIZE OF DATA TYPE

// #include<iostream>
// using namespace std;

// int main(){

//     cout<<"Integer : "<<sizeof(int)<<endl;
//     cout<<"Double : "<<sizeof(double)<<endl;
//     cout<<"Float : "<<sizeof(float)<<endl;
//     cout<<"Character : "<<sizeof(char)<<endl;
//     cout<<"Boolean : "<<sizeof(bool)<<endl;
//     cout<<"String : "<<sizeof(string)<<endl;

//     int a = 10;

//     cout<<sizeof(a)<<endl;

// }

// CURD( CREATE,UPDATE,READ,DELETE)

// CREATE
//  #include<iostream>
//  using namespace std;

// int main(){
//   int n = 10;

//   int arr[n] ={1,2,3,4,5,6,7,8,9,10};

//   for(int i = 0; i < n; i++){
//     cout<<arr[i]<<endl;
//     // cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//    }
//  }

//   UPDATE  OF ARRAY

// #include<iostream>
// using namespace std;

// int main(){

//    int arr[5] = {10,2,30,40,50};

//    arr[1] = 20;

//    for(int element : arr){
//     cout<<element<<" ";
//    }

// }

//  2 WAY OF UPDATE OF ARRAY
// #include<iostream>
// using namespace std;

// int main(){

//    int arr[5] = {10,2,30,40,50};

//     for(int i = 0; i < 5; i++){
//         if(i==1){
//             arr[i] = 20;
//             break;
//         }
//     }

//    for(int element : arr){
//     cout<<element<<" ";
//    }

// }

// READ

// #include<iostream>
// using namespace std;

// int main(){

// int n = 6;

// int arr[n];

// for(int i = 0; i < n; i++){
//   cin>>arr[i];
// }

//   for(int i = 0; i < n; i++){
//     cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }
// // print array

// for(int i = 0; i < n; i++){
//   cout<<arr[i]<<" ";
// }
// }

// Delete Array element from speific index

// #include<iostream>
// using namespace std;

// int main(){

//    int arr[5] = {10,2,30,40,50};

// // delete

//     for(int i = 0; i < 5; i++){
//        arr[i] = arr[i+1];
//     }

// // array display

//   for(int i = 0; i < 4; i++){
//     cout<<arr[i]<<" ";
//   }

// }

// 2 WAY OF DELETE ARRAY(DAINAMIC)

// // #include <iostream>
//     using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Size of Array : ";
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element at " << i << " index : ";
//         cin >> arr[i];
//     }

//     int deleteIndex;
//     cout << "Enter index number of deleting element : ";
//     cin >> deleteIndex;
//     // delete

//     for (int i = deleteIndex; i < n; i++)
//     {
//         arr[i] = arr[i + 1];
//     }

//     // array display

//     for (int i = 0; i < n - 1; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// inserting an element into an array
//  #include <iostream>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     // int size = sizeof(arr) / sizeof(arr[0]);
//     int newElement = 99;
//     int position = 2; // Insert at index 2

//     int newArray[5 + 1];

//     // Copy elements before the position
//     for (int i = 0; i < position; i++) {
//         newArray[i] = arr[i];
//     }

//     // Insert the new element
//     newArray[position] = newElement;

//     // Copy the remaining elements
//     for (int i = position; i < 5; ++i) {
//         newArray[i + 1] = arr[i];
//     }

//     // Print the new array
//     for (int i = 0; i < 5 + 1; ++i) {
//         std::cout << newArray[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Original array with 5 elements
//     int arr[] = {1, 2, 3, 4, 5};
//     int newElement = 99; // Element to insert
//     int position = 2;    // Index where we want to insert

//     // New array to hold 6 elements (5 original + 1 new)
//     int newArray[6];

//     // Copy elements before the position
//     for (int i = 0; i < position; i++)
//     {
//         newArray[i] = arr[i];
//     }

//     // Insert the new element at the specified position
//     newArray[position] = newElement;

//     // Copy the rest of the elements from the original array
//     for (int i = position; i < 5; i++)
//     {
//         newArray[i + 1] = arr[i];
//     }

//     // Print the new array
//     cout << "Array after insertion: ";
//     for (int i = 0; i < 6; i++)
//     {
//         cout << newArray[i] << " ";
//     }

//     return 0;
// }

// SWAP US FOR CHANGE THE PLACE OF ELEMENT
// Swap()

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;

//     swap(b,a);   //(A=20,B=10) OUTPUT

//     cout<<"A : "<<a<<endl;
//          cout<<"B : "<<b<<endl;

// }

// REVESRE ARRY

// 1] WAY (WHILE LOOP METHOD)

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10] = {12,34,5,67,8,9,1223,56,78,2};

//  cout<<"Before swap/reverse : ";

//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }

// cout<<endl;

//     int i = 0;
//     int j = 9;

//     while(i<j){

//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }

// cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){
//         cout<<arr[i] <<" ";
//     }
// }

// 2]WAY (FOR LOOP)

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[10] = {12,34,67,56,89,44,22,12,98,100};

//     int j = 9;

//     for(int i = 0; i < 10; i++){

//         if(i>=j){
//             break;
//         }

//         swap(arr[i],arr[j]);
//         j--;
//     }

//     cout<<"After swap/reverse : ";
//     for(int i = 0; i < 10; i++){

//         cout<<arr[i] <<" ";
//     }

// }
