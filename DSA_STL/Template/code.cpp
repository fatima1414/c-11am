
// #include <iostream>
// using namespace std;

// int addition(int x, int y)
// {
//     cout << "Sum : " << x + y << endl;
// }

// int main()
// {

//     addition(10, 20);
// }




// Template : inside function

// #include <iostream>
// using namespace std;

// template<typename z>
// z addition(z x, z y)
// {
//     cout << "Sum : " << x + y << endl;
// }

// int main()
// {

//     addition(10.5, 20.8);
// }

// #include <iostream>
// using namespace std;

// template <typename T1, typename T2, typename T3>
// T1 addition(T1 x, T2 name, T3 num)
// {
//     cout << "Integer Value : " << x << endl;
//     cout << "String value : " << name << endl;
//     cout << "Double value : " << num << endl;
// }

// int main()
// {

//     addition(12, "pawan",25.5);
// }


  //its is not ok (we can't use inside the  int main)

// #include<iostream>
// using namespace std;

// int main(){

//     // template<typename T>  // Not ok

// }


// Template : inside class

// #include <iostream>
// using namespace std;

// template<typename T1,typename T2>
// class Student
// {
// public:
//     T1 name;
//     T2 age;


//     Student(T1 name, T2 age)
//     {
//         this->name = name;
//         this->age = age;
//     }


//     T1 display()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };

// int main()
// {
//     Student<string,int> s1("Pawan",25);

//     s1.display();
// }

//vector using template

// #include <iostream>
// #include <vector>
// using namespace std;

// template <typename T>
// T vectorFun()
// {
//     vector<T> v1;

//     // Adding elements to vector
//     v1.push_back(10);
//     v1.push_back(20);
//     v1.push_back(30);

//     // Printing the size of the vector
//     cout << "Size of vector : " << v1.size() << endl;

//     // Accessing elements
//     cout << "At 0 index : " << v1[0] << endl;
//     cout << "Front element in vector : " << v1.front() << endl;
//     cout << "Last element in vector : " << v1.back() << endl;

//     // Adding more elements
//     v1.push_back(40);
//     v1.push_back(50);
//     v1.push_back(60);

//     cout << "Elements in vector: ";
//     // Corrected method:1 - Use size_t or int for loop index
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     // Another way to loop through elements (commented-out)
//     // method:2 (Range-based loop)
//     // for (const T& item : v1) {
//     //     cout << item << " ";
//     // }

//     cout << endl;

//     // v1[-1] is not valid
//     // cout << "Element with negative index: " << v1[-1] << endl; // This will cause an error

//     // Removing the last element
//     v1.pop_back();

//     cout << "Elements in vector after pop: ";
//     // Corrected method:1 - again using size_t for the index
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     // Accessing an element using `at` method
//     cout << "Element at index 2: " << v1.at(2) << endl;

//     cout << "Clearing vector..." << endl;
//     v1.clear();

//     cout << "Vector is empty or not: " << (v1.empty() ? "Yes" : "No") << endl;
//     cout << "Size of vector after clear: " << v1.size() << endl;

//     // Check if the vector is empty after clearing
//     cout << "Elements after clearing vector: ";
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     cout << "Size of vector: " << v1.size() << endl;

//     // Adding more elements
//     v1.push_back(10);
//     v1.push_back(100); // Note: you commented this out, but it should work
//     v1.resize(1);      // Resizes vector to 1 element
//     v1.push_back(200);
//     v1.push_back(300);
//     v1.push_back(400);

//     cout << "Elements after resizing and pushing more: ";
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     // Inserting an element at position 3
//     v1.insert(v1.begin() + 3, 999);
//     cout << "After inserting 999 at position 3: ";
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;

//     // Erasing element at position 3
//     v1.erase(v1.begin() + 3);
//     cout << "After erasing element at position 3: ";
//     for (T i = 0; i < v1.size(); i++)
//     {
//         cout << v1[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vectorFun<int>(); // Passing int as template argument for vector of integers
//     return 0;
// }