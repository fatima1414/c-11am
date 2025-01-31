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
// int main()
// {
//     int x = 10;
//     int *ptr = &x;

//     cout << x << endl;    // 10
//     cout << *ptr << endl; // 10

//     *ptr = 80;

//     cout << x << endl;    // 80
//     cout << *ptr << endl; // 80
// }

// /  refrence variable -> address -> & -> refrence varable store the address of another variable

// FUNCTION POINTER

// #include <iostream>
// using namespace std;
// int print(int &x)
// {
//     cout << "Value of x : " << x << endl; // 10
//     cout << "Address Value of x : " << &x << endl; //add
//     x = 100;
// }
// int main()
// {

//     int a = 10;
//     print(a);
//     cout << "Value of a : " << a << endl; // 100
//     cout << "address of a : " << &a << endl; //add
// }

// call by value UPER javu se

// #include <iostream>
// using namespace std;
// // function to update the original value 
// void increment(int num)
// {
//     cout << "post inc : " << num++ << endl; // 5
//     cout << num << endl;                    // 6
// }
// int main()
// {
//     int number = 5;
//     increment(number); // Passing 'number' by value
//     cout << number << endl;
//     // return 0;
// }