#include <iostream>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/

    char d;

    cout << "Enter a character: ";
    cin >> d;

    if( d >= '0' && d <= '9')
    {
        cout << "This is a digit\n";
    }
    

    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    int x;
    int y;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;

    if (x > y)
    {
        cout << x << " is greater than " << y ;
    }


    
    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/

    int a;
    int b;
    int c;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "Enter another number: ";
    cin >> c;

    if ((a == b && a == c) && (b == c))
    {
        cout << "We have a match\n";
    }   

    /*Section III Ends*/

    return 0;
}