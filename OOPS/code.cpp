// oops

//   syntax of class

// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// };
// int main()
// {
//     Person fatima; // create object
// }

// public access

#include<iostream>
using namespace std;
// create class
class Person{
    // Access specifier
    public :

    //data member
    string name;
    int age;

    // method
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main(){
    Person f;  // create object
// insilization -> outide of class
    f.name = "Fatima";
    f.age = 11;
    f.display();
}

// #include <iostream>
// using namespace std;
// class Car
// {
// public:
//     string brand; // Public member

//     void display()
//     {
//         cout << "Car Brand: " << brand << endl;
//     }
// };

// int main()
// {
//     Car car1;
//     car1.brand = "BMW"; // ✅ Directly modifying public member
//     car1.display();
//     return 0;
// }

// private & protected is outside call is not ok

// #include<iostream>
// using namespace std;
// // create class
// class Person{
//     // Access specifier
//     // private :
//     protected :
//     string name;
//     int age;
//     // method
//     void display(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Age : "<<age<<endl;
//     }
// };
// int main(){
//     Person f;  // create object
// // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;
//     f.display();
// }
