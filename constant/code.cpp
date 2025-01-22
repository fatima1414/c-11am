
// 1 micro constant

// #include <iostream>

// using namespace std;

// #define num "fatima" it is gobal variable

// int main()
// {
//     cout << num << endl;
// }


   
// #include <iostream>

// using namespace std;

// #define x 50
// #define y 50

// int main(){
//     cout <<x+y<< endl;
// }




// #include <iostream>

// using namespace std;

// #define num "20" we can write any data type

// int main()
// {
//     cout << num << endl;
// }

// we can't define multiple value in micro




    // constant 

  
// #include <iostream>

// using namespace std;

// int main()
// {
//    const int num=30;  it is const  
//     cout << num << endl;
// }




// #include <iostream>

// using namespace std;

// int main()
// {
//    const int num=30; 
//    num=30;it is not ok we cant change const value
  
//     cout << num << endl;
// }




//   block scope


// #include <iostream>
// using namespace std;

// int main(){
//     int num=10; it is a gobal variable
//     cout<<"num1 "<<num<<endl;
//     {
//         int num=20; it is a local variable
//         cout<<"num2 "<<num<<endl;
//     }
    
//     cout<<"num3 "<<num<<endl;
// }



    //   namespace is a key word

    
// #include <iostream>
// using namespace std;
// int a=60;  // gloable variable
// int main(){
//     int a=10;
//     cout<<a<<endl;
//     {
//         int a=20;
//         cout<<a<<endl;
//     }
//     int b = 30;
//     cout<<a<<endl;
//     cout<<::a<<endl;
// }

     // namespace

     
// #include <iostream>

// using namespace std;

// namespace na{
//     int a=20;
    
// }
// int main()
// {
//     cout<<na::a<<endl;
// }



// #include <iostream>

// using namespace std;

// namespace na{
//     int a=20;
// }
// int main()
// {
//     cout<<na::a<<endl;
// }


// multiple variable

// #include <iostream>

// using namespace std;

// namespace na{
//     int a=20;
// }

// namespace nb{
//     int a=30;
// }

// namespace nc{
//     int a=40;
// }

// namespace nd{
//     int a=50;
// }
// int main()
// {
//     cout<<na::a<<endl;
//     cout<<nb::a<<endl;
//     cout<<nc::a<<endl;
//     cout<<nd::a<<endl;
    
// }

