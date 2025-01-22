
// NUMBER PATTERN

//  1  1  1  1
//  1  1  1  1
//  1  1  1  1
//  1  1  1  1
// #include <iostream>
// using namespace std;

// int main(){

//     for(int row=1;row<=4;row++){

//       for(int col=1;col<=4;col++){
//         cout<<" 1 ";
//       }
//       cout<<endl;
//     }
// }

// 1 1 1
// 2 2 2
// 3 3 3
// // 4 4 4
// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int row = 1; row <= 4; row++)
//     {

//         for (int col = 1; col <= 4; col++)
//         {
//             cout << row<<" ";
//         }
//         cout << endl;
//     }
// }

// 3 3 3
// 3 1 3
// 3 2 3
// 3 3 3

// #include <iostream>
// using namespace std;

// int main()
// {

//     for (int row = 1; row <= 4; row++)
//     {

//         for (int col = 1; col <= 3; col++)
//         {
//             if (row == 2 && col == 2)
//             {
//                 cout << " 1 ";
//             }
//             else if (row == 3 && col == 2)
//             {
//                 cout << " 2 ";
//             }
//             else
//             {
//                 cout << " 3 ";
//             }
//         }
//         cout << endl;
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// #include <iostream>
// using namespace std;

// int main()
// {

//     int num = 1;
//     for (int row = 1; row <= 4; row++)
//     {

//         for (int col = 1; col <= row; col++)
//         {
//             cout << num++;
//         }
//         cout << endl;
//     }
// }

// 10 9 8 7
// 6 5 4
// 3 2
//  1
// #include <iostream>
// using namespace std;

// int main() {
//     // int num,
//        int count = 0;
//     // cin >> num;

//     // Calculate the initial value of count
//     for (int i = 4; i > 0; i--) {
//         count += i;
//     }

//     // Print the pattern
//     for (int i = 0; i < 4; i++) {
//         for (int j = 0; j < 4- i; j++) {
//             cout << count <<" ";
//             count--;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 6666
//  555
//   44
//    3
#include <iostream>
using namespace std;

int main()
{
    int start = 6; // Starting number (6)

    //  for rows
    for (int i = 0; i < 4; i++)
    { 
    
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }

        // for printing numbers
        for (int col = 0; col < 4 - i; col++)
        {
            cout << (start - i) << "";
        }

        cout << endl;
    }

    return 0;
}
