#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
    double SumOfThree(double a, double b, double c)
    {
        cout <<(a + b + c);
    }
    double Absolute(double x)
    {
        if (x > 0)
        {
            cout << x;
        }
        else if (x<0)
        {
            cout << (x * -1);
        }
    }
    double Maximum(double k, double l, double m)
    {
        if (k >  l && m < k)
        {
            cout << k;
        }
        else if ( l >  k && m < l)
        {
            cout << l;
        }
        else if (m > l && m > k)
        {
            cout << m;
        }
        
    }
/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls
    double num1,num2,num3,num5,num6,num7,num8;
    
    /*Sum of Three*/
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Enter another number: ";
    cin >> num3;

    
    cout << "\nThe sum of " <<num1<< ", " <<num2<< " and " <<num3<< " is ";
    SumOfThree(num1, num2, num3);
    cout << "\n";

    /*Absolute value*/
    cout << "\nEnter a number: ";
    cin >> num5;
    
    cout << "\nThe absolute value of " <<num5 << " is ";
    Absolute(num5);
    cout << "\n";

    /*Maximum value*/
    cout << "\nEnter a number: ";
    cin >> num6;
    cout << "Enter another number: ";
    cin >> num7;
    cout << "Enter another number: ";
    cin >> num8;

    cout << "\nThe maximum value of " <<num6<< ", " <<num7<< " and " <<num8<< " is ";
    Maximum(num6, num7 ,num8);
    cout << "\n";

    return 0;
}