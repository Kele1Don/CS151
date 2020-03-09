#include <iostream>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/
    int K;
    int M;

    cout << "Enter a number: ";
    cin >> K;
    cout << "Enter another number: ";
    cin >> M;

    if (K > M)
    {
        cout << M << " is the minimum value\n" ;
    }
    else
    {
        cout << K << " is the minimum value\n";
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

    if((x + y) % 2 == 0)
    { 
        cout << "Their sum is even\n";
    }
    else 
    {
        cout << "Their sum is odd\n";
    }
    
    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    
    /*Section III Ends*/

    cout << "\nSection IV\n";
    /*Section IV Begins*/

    /*Section IV Ends*/

    return 0;
}