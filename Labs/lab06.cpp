#include <iostream>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/
    string name;
    cout <<"Enter your first name: ";
    getline(cin,name);
    cout <<"Hello,"<< name<< "!";

    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    int year;
    int age;
    cout <<"Enter your birth year: ";
    cin >> year;
    age = (2020 - year);
    cout <<"You are going to be " << age << " this year! ^-^";

    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    int num1, num2, num3, avg;
    cout <<"Enter a number: ";
    cin >> num1;
    cout <<"Enter another number: ";
    cin >> num2;
    cout <<"Enter another number: ";
    cin >> num3;
    avg = (num1 + num2 + num3)/3;
    cout << "The average of " << num1 << "," << num2 << " and " << num3 << " is " << avg << "\n";

    /*Section III Ends*/

    return 0;
}