
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