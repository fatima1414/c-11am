
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

// Minimum value in the array
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

 //CURD( CREATE,UPDATE,READ,DELETE)

//CREATE
// #include<iostream>
// using namespace std;

// int main(){
//   int n = 10;

//   int arr[n] ={1,2,3,4,5,6,7,8,9,10};

//   for(int i = 0; i < n; i++){
//     cout<<arr[i]<<endl;
//     // cout<<"Element present at "<<i<<" index : "<<arr[i]<<endl;
//   }
// }

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

//READ

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


// Delete 
//Array element from speific index

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

//2 WAY OF DELETE ARRAY(DAINAMIC)

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