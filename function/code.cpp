

// // function

// #include<iostream>
// using namespace std;
// // parameter in function
// int addition(int num1, int num2){   // funtion definition
//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20
//     // block
// }
// int main(){      // function definition
// // argument
// addition(10,20);  // function call
// return 0;
// }

// #include<iostream>
// using namespace std;
// // parameter in function
// int addition(){   // funtion definition
//     int num1 = 10;
//     int num2 = 20;
//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20
//     // block
// }
// int main(){      // function definition
// // argument
// // addition(10,20);  // function call
// return 0;
// }




// Type 1 : take nothing and return nothing

// #include<iostream>
// using namespace std;
// // parameter in function
// int addition(){   // funtion definition
//     int num1 = 10;
//     int num2 = 20;
//     cout<<"Num1 : "<<num1<<endl;  //10
//     cout<<"Num2 : "<<num2<<endl;  //20
//     // block
// }
// int main(){      // function definition
// // argument
// // addition(10,20);  // function call
// addition();
// return 0;
// }



// #include<iostream>
// using namespace std;
// // parameter in function
// int addition(){   // funtion definition
//     int num1 = 10;
//     int num2 = 20;
//     return num1+num2;
//     // block
// }
// int main(){      // function definition
// // argument
// // addition(10,20);  // function call
// int result = addition();
// cout<<"Result : "<<result<<endl;
// return 0;
// }



// #include<iostream>
// using namespace std;
// // parameter in function
// void addition(){   // funtion definition
//     int num1 = 10;
//     int num2 = 20;
//     cout<<num1<<endl;
//     cout<<num2<<endl;
//     // return num1+num2;
//     // block
// }
// int main(){      // function definition
// // argument
// // addition(10,20);  // function call
// // int result = addition();
// // cout<<"Result : "<<result<<endl;
// addition();
// return 0;
// }




// #include<iostream>
// using namespace std;
// void addition(double num1, double num2){
// cout<<num1+num2<<endl;
// }
// int main(){
//     addition(12.4,9.3);
// }


// #include<iostream>
// using namespace std;
// int addition(double num1, double num2){
//     return num1+num2;   // int

// }
// int main(){
//  double result =  addition(12.4,9.3);
//  cout<<"Result : "<<result<<endl;
// }



// #include<iostream>
// using namespace std;
// double addition(double num1, double num2){
//     return num1+num2;   // double

// }
// int main(){
//  double result =  addition(12.4,9.3);
//  cout<<"Result : "<<result<<endl;
// }



// Take something and return something

// #include <iostream>
// using namespace std;
// float addition(double num1, double num2)
// {
//     return num1 + num2; // float
// }
// int main()
// {
//     double result = addition(12.4, 9.3);
//     cout << "Result : " << result << endl;
// }



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int num1;
//     cout<<"Enter Num1 : ";
//     cin>>num1;
//     int num2;
//     cout<<"Enter Num2 : ";
//     cin>>num2;
//     char exp;
//     cout<<"Enter Operator : ";
//     cin>>exp;
//     switch(exp){
//         case '+' :
//             cout<<"Addition : "<<num1+num2<<endl;
//             break;
//         case '-' :
//             cout<<"Subtraction : "<<num1-num2<<endl;
//             break;
//         case '*' :
//             cout<<"Multiplication : "<<num1*num2<<endl;
//             break;
//         case '/' :
//             cout<<"Divide : "<<num1/num2<<endl;
//             break;
//         case '%' :
//             cout<<"Remainder : "<<num1%num2<<endl;
//             break;
//         default :
//         cout<<"Please enter correct operator!"<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//    char choice = 'y';

//    while(choice == 'y' || choice == 'Y' ){

//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;
//     int count = 0;
//       cout<<"Factor : ";
//     for(int i = 1; i <= num; i++){
//         if(num%i == 0){
//             cout<<i<<" ";
//             count++;
//         }
//     }
//   cout<<"\nCount : "<<count<<endl;
//     if(count == 2){
//         cout<<"\nPrime Number!";
//     }else{
//         cout<<"\nNot prime number!";
//     }
//     cout<<"\nAre you want to try next (y/n) : ";
//     cin>>choice;

//    }
// }

// Prime number within a given range (WHILE LOOP USE)

// #include <iostream>
// using namespace std;
// int main()
// {
//     char choice = 'y';

//     while (choice == 'y' || choice == 'Y')
//     {

//         int start;
//         cout << "Enter Start Number :";
//         cin >> start;
//         int end;
//         cout << "Enter end number : ";
//         cin >> end;
//         for (int num = start; num <= end; num++)
//         {
//             int count = 0;
//             for (int i = 1; i <= num; i++)
//             {
//                 if (num % i == 0)
//                 {
//                     count++;
//                 }
//             }
//             if (count == 2)
//             {
//                 cout << num << " ";
//             }
//         }
//         cout << "\nAre you want to try next (y/n) : ";
//         cin >> choice;
//     }
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter Number : ";
//     cin>>num;
//     int sum = 0;
//     while(num>0){
//         int digit = num%10;  // last digit  186%10 => 6  , 18%10  => 8, 1%10=> 1
//         sum += digit;  // 0 +6 +8 +1
//         num = num/10;  // last digit remove  186/10 => 18, 18/10 => 1, 1/10 => 0
//     }
//     cout<<"Sum : "<<sum<<endl;
// }
