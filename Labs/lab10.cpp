#include <iostream>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/
    char x;

    cout << "Enter a character: ";
    cin >> x;

    if( x == '0')
    {
        cout << "Zero\n\n";
    }
    else if(x == '1')
    {
        cout << "One\n\n";
    }
    else if (x == '2')
    {
        cout << "Two\n\n";
    }
    else if (x == '3')
    {
        cout << "Three\n\n";
    }
    else if (x == '4')
    {
        cout << "Four\n\n";
    }
    else if (x == '5')
    {
        cout << "Five\n\n";
    }
    else if (x == '6')
    {
        cout << "Six\n\n";
    }
    else if (x == '7')
    {
        cout << "Seven\n\n";
    }
    else if (x == '8')
    {
        cout << "Eight\n\n";
    }
    else 
    {
        cout << "Nine\n\n";
    }
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
     double gr;

    cout << "Enter a grade: ";
    cin >> gr;

    if(gr >= 97)
    {
        cout << "A+\n";
    }
    else if(gr <= 96.9 && gr >= 93) 
    {
        cout << "A\n";
    }
    else if(gr <= 92.9 && gr >= 90)
    {
        cout << "A-\n";
    }
    else if(gr <= 89.9 && gr >= 87)
    {
        cout << "B+\n";
    }
    else if(gr <= 86.9 && gr >= 83)
    {
        cout << "B\n";
    }
    else if(gr <= 82.9 && gr >= 80)
    {
        cout << "B-\n";
    }
    else if(gr <= 79.9 && gr >= 76)
    {
        cout << "C+\n";
    }
    else if(gr <= 75.9 && gr >= 65)
    {
        cout << "C\n";
    }
    else if(gr <= 64.9)
    {
        cout << "F\n";
    }
    /*Section II Ends*/

    return 0;
}