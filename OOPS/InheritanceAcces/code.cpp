
// Way of Inheritance

// public to public

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// public:
//     int number;
// };
// // Derived Class
// class Car : public Vehical
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     Car c1;
//     c1.display();
// }

// // public to protected

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// public:
//     int number;
// };

// // Derived Class
// class Car : protected Vehical
// {

// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };

// int main()
// {

//     Car c1;

//     c1.display();
// }

// public to private

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// public:
//     int number;
// };
// // Derived Class
// class Car : private Vehical
// {
// };
// class BMW : public Car
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     // Car c1;
//     // c1.display();
//     BMW b1;
//     b1.display();
// }
// //

// // protected to public

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// protected:
//     int number;
// };
// // Derived Class
// class Car : public Vehical
// {
// };
// class BMW : public Car
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     // Car c1;
//     // c1.display();
//     BMW b1;
//     b1.display();
// }

// // protected to protected

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// protected:
//     int number;
// };
// // Derived Class
// class Car : protected Vehical
// {
// };
// class BMW : public Car
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     // Car c1;
//     // c1.display();
//     BMW b1;
//     b1.display();
// }

// protected to private

// #include <iostream>
// using namespace std;
// // Base class
// class Vehical
// {
// protected:
//     int number;
// };
// // Derived Class
// class Car : private Vehical
// {
// };
// class BMW : public Car
// {
// public:
//     void display()
//     {
//         cout << "Veical has atleat 2 wheels " << number << endl;
//     }
// };
// int main()
// {
//     // Car c1;
//     // c1.display();
//     BMW b1;
//     b1.display();
// }


// // private to public

// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;
    
// };
// // Derived Class
// class Car : public Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }

// // private to protected

// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;
    
// };
// // Derived Class
// class Car : protected Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }

// private to private

// #include<iostream>
// using namespace std;
// // Base class
// class Vehical{
//     private :
//     int number;
    
// };
// // Derived Class
// class Car : private Vehical{
//     public :
//     void display(){
//         cout<<"Veical has atleat 2 wheels "<<number<<endl;
//     }
// };
// int main(){
// Car c1;
// c1.display();
// }
