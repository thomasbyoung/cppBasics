#include <iostream>

using namespace std; //namespace so do not need to use 'std::' 

//int main()
//{
//    //Basic console output 'cout'
//    cout << "Hello World!\n";
//    cout << "My name is Tom." <<endl;
//    cout << "Happy to learn C++";
//
//    system("pause>0");
//}

// tutorial checkpoint 29:00

int main()
{
    //Basic's of variables

    float annualSalary;
    cout << "Please enter your annual salary: ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;

    cout << "Your monthly salary is " << monthlySalary;

    char character = 'a';

    system("pause>0");
}
