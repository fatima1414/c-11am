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


//CONSTRACT
//CONSTRACT ( SECOND WAY OF SETTER)
//(CONSTRACT  IS A SAME AS CLASS NAME)
// #include <iostream>
// using namespace std;
// // create class
// class Person
// {
// private:
//     string name;
//     int age;

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
