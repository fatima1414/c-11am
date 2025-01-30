// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;    // variable declared
//     int *ptr = &a; // pointer variable declared and assign address of a.
//     // value
//     cout << "a : " << a << endl;
//     cout << "*ptr : " << *ptr << endl;
//     // address
//     cout << "Address of a : " << &a << endl;
//     cout << "Address of ptr : " << ptr << endl;
// }

// DOUBLE POINTER

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 10;

//     int *ptr1 = &a;

//     int **ptr2 = &ptr1;

//     cout<<*ptr1<<endl;  //10
//     cout<<ptr1<<endl;  //add

//     cout<<&a<<endl;  //add

//     cout<<*ptr2<<endl;  //add

//     cout<<**ptr2<<endl;  //10
// }

// Array pointer

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[5] = {10,20,30,40,50};

//     int *ptr = arr;  //->array ka base address -> &arr[0]

//     cout<<arr<<endl;   //ADD

//     cout<<&arr[0]<<endl;  //ADD

//     // int *ptr = arr;

//     // cout<<*ptr<<endl;

//     // int *ptr = arr;

//     for(int i = 0; i < 5; i++){
//         cout<<"Address of "<<i<<" index : "<<(ptr+i)<<" and its value : ";
//         cout<<*(ptr + i)<<endl;
//     }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int choice;
//     double num1, num2;

//     while (true) {
//         // Display menu
//         cout << "\nCalculator Menu:\n";
//         cout << "1. Addition (+)\n";
//         cout << "2. Subtraction (-)\n";
//         cout << "3. Multiplication (*)\n";
//         cout << "4. Division (/)\n";
//         cout << "5. Modulus (%)\n";
//         cout << "0. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         // Exit condition
//         if (choice == 0) {
//             cout << "Exiting the program...\n";
//             break;
//         }

//         // Get input numbers
//         cout << "Enter two numbers: ";
//         cin >> num1 >> num2;

//         // Perform calculations
//         switch (choice) {
//             case 1:
//                 cout << "Result: " << (num1 + num2) << endl;
//                 break;
//             case 2:
//                 cout << "Result: " << (num1 - num2) << endl;
//                 break;
//             case 3:
//                 cout << "Result: " << (num1 * num2) << endl;
//                 break;
//             case 4:
//                 if (num2 != 0)
//                     cout << "Result: " << (num1 / num2) << endl;
//                 else
//                     cout << "Error: Cannot divide by zero!\n";
//                 break;
//             case 5:
//                 if ((int)num2 != 0)
//                     cout << "Result: " << ((int)num1 % (int)num2) << endl;
//                 else
//                     cout << "Error: Cannot perform modulus by zero!\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     }

//     return 0;
// }
