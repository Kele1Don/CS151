#include <iostream>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/
    string a;
    string b;
    a = "Hello ";
    b = "World!";
    cout << a <<",";
    cout << a;
    cout << b <<endl;
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    int height;
    int inches;
    int feet;
    height = 87;
    inches = height % 12;
    feet = height / 12;
    cout << "The height of ";
    cout << height << " inches is equal to ";
    cout << feet << " feet and ";
    cout << inches << " inches." <<endl;
    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    string star1;
    string star2;
    string star3;
    string star4;
    star1 = "* ";
    star2 = "** ";
    star3 = "*** ";
    star4 = "**** ";
    cout << star4 << star1 << star1 << star4 << endl;
    cout << star3 << star2 << star2 << star3 <<endl;
    cout << star2 << star3 << star3 << star2 << endl;
    cout << star1 << star4 << star4 << star1 << endl;

    /*Section III Ends*/

    return 0;
}