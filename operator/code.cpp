// operator

// uniary operator(increament and decrement)

// 2 way of increment

// #include<iostream>
// using namespace std;

// int main(){
//     int a=10;
//     a++;
//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=50;
//    ++a;  //increment
//     cout<<a<<endl;
// }

// decrement

// #include<iostream>
// using namespace std;

// int main(){
//     int a=50;
//    --a;  //decremrement
//     cout<<a<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=50;
//    a--;  //decremrement
//     cout<<a<<endl;
// }

// ARITHMETIC OPERATOR(+,-,*,/,% )

// #include <iostream>
// using namespace std;

// int main(){

//     int a=300;
//     int b=400;

//     cout<<"addition: "<<(a+b)<<endl;
//     cout<<"subtraction: "<<(a-b)<<endl;
//     cout<<"multiplication: "<<(a*b)<<endl;
//     cout<<"division: "<<(a/b)<<endl;
//     cout<<"modulo: "<<(a%b)<<endl;
// }

// conditional statement
// (relational operator)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 80;
//     int b = 20;

//     if (a > b)    //one condition
//     {
//         cout << "A is greater than B" << endl;
//     }
//     else
//     {
//         cout << "B is greater than A" << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int fatima_age = 19;
//     int khusali_age = 21;

//     if (fatima_age > khusali_age)    //one condition
//     {
//         cout << "fatima is greater than khusali" << endl;
//     }
//     else
//     {
//         cout << "khusali is greater than fatima" << endl;
//     }
// }

// multipale condition

// #include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"enter marks:";
//     cin>>marks;

//     if(marks>=90 && marks<=100){
//         cout<<"your grade is A+";
//     }
//     else if(marks>=80 && marks<90){
//         cout<<"your grade is A";
//     }
//     else if(marks>=70  && marks<80){
//         cout<<"your grade is B++";
//     }

//     else if(marks>=60 && marks<70){
//         cout<<"your grade is B";
//     }

//     else if(marks>=50 && marks<60){
//         cout<<"your grade is C";
//     }
//     else{
//         cout<<"you are fail:";
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"enter marks:";
//     cin>>marks;

//     if(marks>=90 && marks<=100){
//         cout<<"your grade is A+";
//     }

//     else if(marks>=100){
//         cout<<"its not valid"<<endl;
//     }

//     else if(marks>=80){
//         cout<<"your grade is A";
//     }
//     else if(marks>=70){
//         cout<<"your grade is B++";
//     }

//     else if(marks>=60){
//         cout<<"your grade is B";
//     }

//     else if(marks>=50){
//         cout<<"your grade is C";
//     }

//     else{
//         cout<<"you are fail:";
//     }
// }

// REALATION OPERATOR

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;

//     cout << (a == b) << endl;
//     cout << (a != b) << endl;
//     cout << (a >= b) << endl;
//     cout << (a <= b) << endl;
//     cout << (a > b) << endl;
//     cout << (a < b) << endl;
// }

// logical operator (&&,||,!)

//  LOGICAL AND operator(&&)

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;
//     int b = 20;
//     int c = 30;

//     cout << ((a == b) && (a > b)) << endl;
//     cout << ((a != b) && (c > a)) << endl;
//     cout << ((a >= b) && (b > a)) << endl;
//     cout << ((a <= b) && (b > c)) << endl;
//     cout << ((a > b) && (c > a)) << endl;
//     cout << ((a < b) && (a <= b)) << endl;
// }

// LOGICAL OR (||)

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;
//     int b = 20;
//     int c = 30;

//     cout << ((a == b) || (a > b)) << endl;
//     cout << ((a != b) || (c > a)) << endl;
//     cout << ((a >= b) || (b > a)) << endl;
//     cout << ((a <= b) || (b > c)) << endl;
//     cout << ((a > b) || (c > a)) << endl;
//     cout << ((a < b) || (a <= b)) << endl;
// }

// LOGICAL NOT (!)
//CHATGPT CODE
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;

//     cout << !(a != b) << endl; // Negates the result of (a != b)
//     cout << !(c > a) << endl; // Negates the result of (c > a)
//     cout << !(a <= b) << endl; // Negates the result of (a <= b)
//     cout << !(b > c) << endl; // Negates the result of (b > c)
//     cout << !(a > b) << endl; // Negates the result of (a > b)
//     cout << !(a >= b) << endl; // Negates the result of (a >= b)

//     return 0;
// }

//sir code

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;
//     int b = 20;
//     int c = 30;

//     cout <<! ((a == b) || (a > b)) << endl;
//     cout <<! ((a != b) || (c > a)) << endl;
//     cout <<! ((a >= b) || (b > a)) << endl;
//     cout <<! ((a <= b) || (b > c)) << endl;
//     cout <<! ((a > b) || (c > a)) << endl;
//     cout <<! ((a < b) || (a <= b)) << endl;
// }



// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 10;
//     int b = 20;
//     int c = 30;

//     cout <<! ((a == b) && (a > b)) << endl;
//     cout <<! ((a != b) && (c > a)) << endl;
//     cout <<! ((a >= b) && (b > a)) << endl;
//     cout <<! ((a <= b) && (b > c)) << endl;
//     cout <<! ((a > b) && (c > a)) << endl;
//     cout <<! ((a < b) && (a <= b)) << endl;
// }







// ASSIGEMENT OPERATOR (+=,-=,/=,*=,%=)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5;

//     //   a=10;

//     //   a=a+10;
//     // a+=10;

//     //   a-=3;
//     // a%=8;
//     // a/=5;
//     // a*=9;

//     cout << a << endl;
// }


// // TERNORY OPERATOR

// #include <iostream>
// using namespace std;

// int main(){

//     int a=10;
//     int b=20;
    
//     (a>b)?cout<<"a is greater number:":cout<<"b is greater number";
// }

