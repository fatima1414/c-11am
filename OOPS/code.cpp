// oops
// chat GPT CODE OF PUBLIC ACCESS
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

// OOPS

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

// #include<iostream>
// using namespace std;
// // create class
// class Person{
//     // Access modifier
//     public :

//     //data member
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
//     f.name = "Fatima";
//     f.age = 11;
//     f.display();
// }

// private & protected is outside DECLARE is not ok

// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
//     // Access specifier
//     private :
//     // protected :
//     string name;
//     int age;
//     // method
//     void display()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person f; // create object
//               // insilization -> outide of class
//     f.name = "Fatima Ji";
//     f.age = 11;
//     f.display();
// }

// PUBLIC (taking a GARBAGE VALUE)

// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
//     // Access specifier
//     // private :
// public:
//     string name;
//     int age;
// };
// int main()
// {
//     Person f; // create object -> allocate memory to data member
//               // outside -> access
//     cout << "Name : " << f.name << endl;
//     cout << "Age : " << f.age << endl;
// }

// 1  ENCAPTION

// SETTER GATTER METHOD
// getter (INSILIZATION) and setter (DECLARATION) method
//( MOSTLIY USE PRIVATE  SETTER GATTER METHOD )

// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     // setter method
//     void setData(string name, int age)
//     {//(THIS  KEYWORDS USE FOR CURRENT INTANCE  REPRESENT THAT)
//         this->name = name;
//         this->age = age;
//     }
//     void setData() //( MULTIPLE TIME USE SETTER)
//     {
//         cout << "Aur setter bhai chal jawoge" << endl;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << this->name << endl;
//         cout << "Age : " << this->age << endl;
//     }
// };
// int main()
// {
//     Person f, j; // create object -> allocate memory to data member
//     f.setData("Fatima", 18);
//     f.setData();
//     f.getDetails();
//     j.setData("Janam", 11);
//     j.getDetails();
// }

// CONSTRACT

// CONSTRACT ( SECOND WAY OF SETTER)
//(CONSTRACT  IS A SAME AS CLASS NAME)
//  #include <iostream>
//  using namespace std;
//  // create class
//  class Person
//  {
//  private:
//      string name;
//      int age;

// public:
//     // constructor
//     Person(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person p("Praksh", 15);
//     p.getDetails();
// }

// Array of objects (collection of object of the same class)

// #include <iostream>
// using namespace std;
// // Define the Person class
// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     // Setter method to assign values
//     void setDetails(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // Getter method to display values
//     void getDetails()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// int main()
// {
//     // Array of objects
//     Person p[2];
//     // Set details for each object
//     p[0].setDetails("Pawan", 24);
//     p[1].setDetails("Manish", 25);
//     // Get details of each object
//     p[0].getDetails();
//     p[1].getDetails();
//     return 0;
// }

// Constructor method for array of object(second way)

// #include <iostream>
// using namespace std;
// // Define the Person class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // Constructor to initialize data members
//     Person(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // Getter method to display values
//     void getDetails()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// int main()
// {
//     // Array of objects initialized using constructors
//     Person p[2] = {
//         Person("Pawan", 24),
//         Person("Manish", 25)};

//     cout << "Object first details: " << endl;
//     p[0].getDetails();
//     cout << "Object second details: " << endl;
//     p[1].getDetails();
//     return 0;
// }

// Array of objects with the help of pointer
// Array Pointer Object : setter method

// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // setter method
//     void setDetails(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person *p[2];
//     p[0] = new Person(); // allocate memory
//     p[1] = new Person(); // allocate memory
//     p[0]->setDetails("Pawan", 24);
//     p[1]->setDetails("Manish", 25);
//     p[0]->getDetails();
//     p[1]->getDetails();
// }

// deallocate memory
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     // setter method
//     void setDetails(string firstname, int currentage)
//     {
//         name = firstname;
//         age = currentage;
//     }
//     // getter method
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };
// int main()
// {
//     Person *p[2];
//     p[0] = new Person(); // allocate memory
//     p[1] = new Person(); // allocate memory
//     p[0]->setDetails("Pawan", 24);
//     p[1]->setDetails("Manish", 25);
//     p[0]->getDetails();
//     p[1]->getDetails();
//     delete *p; // deallocate memory
// }

// Array Pointer Object : constructor
// // #include <iostream>
// // using namespace std;
// // // create class
// // class Person
// // {
// // protected:
// //     string name;
// //     int age;

// // public:
// //     // constructor
// //     Person(string firstname, int currentage)
// //     {
// //         name = firstname;
// //         age = currentage;
// //     }
// //     // getter method
// //     void getDetails()
// //     {
// //         cout << "Name : " << name << endl;
// //         cout << "Age : " << age << endl;
// //     }
// // };
// // int main()
// // {
//     Person *p[2];
//     p[0] = new Person("Pawan", 24);  // allocate memory
//     p[1] = new Person("Manish", 25); // allocate memory
//     p[0]->getDetails();
//     p[1]->getDetails();
//     delete *p; // deallocate memory
// }

// // #include<iostream>
// // using namespace std;
// // int a = 99;
// // int main(){
// //     int a = 10;
// //     cout<<"Local Value : "<<a<<endl;
// //     cout<<"Globle Value : "<<::a<<endl;
// // }

// #include <iostream>
// using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;

// public:
//     // Constructor to initialize values
//     Student(string studentName, int studentAge)
//     {
//         name = studentName;
//         if (studentAge > 0)
//         { // Validation
//             age = studentAge;
//         }
//         else
//         {
//             age = 0; // Default value if age is invalid
//             cout << "Invalid age! Setting age to 0." << endl;
//         }
//     }

//     // Getter methods
//     void getDetails()
//     {
//         cout << "Student Name: " << this->name << endl;
//         cout << "Student Age: " << this->age << endl;
//     }
// };

// int main()
// {
//     // Creating object and initializing with constructor
//     Student s1("Fatima", 20);
//     s1.getDetails();
//     return 0;
// }

// Static Data member :

// #include <iostream>
// using namespace std;
// class Teacher
// {
// public:
//     string name;          // instance variable
//     int age;              // instance variable
//     static double salary; // class level variable
//     Teacher()  //non parameter
//     {
//         this->name = "Raj";
//         this->age = 11;
//     }
//     Teacher(string name, int age) //parameter
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void getDetails()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//         cout << "Salary : " << salary << endl;
//     }
// };
// double Teacher::salary = 99;
// int main()
// {
//     Teacher t1; // create object => allocate memory to non static data member => automic parameterless cunstructor called..

//     Teacher t2("Vraj", 5); // call -> parameter constructor
//     t1.getDetails();
//     t2.getDetails();
// }

// Static member function

#include<iostream>
using namespace std;
class Teacher{
    public :
      static double salary;  // class level variable
  static void getDetails(){
        cout<<"Salary : "<<salary<<endl;
    }
};
double Teacher::salary = 99;  // static data member initialiston
int main(){
    Teacher::getDetails();
}