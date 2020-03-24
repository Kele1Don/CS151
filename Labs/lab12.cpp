#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
    bool ConsecutiveNums(int a, int b, int c)
    {
        bool d = (b - a == 1 && c - a == 2) || (a - b == 1 && c - b == 2) || (c - a == 1 && b - a == 2) || (b - c == 1 && a - c == 2) || (c - b == 1 && a -b == 2) || (a - c == 1 && b - c == 2);
        if (d == 1)
        {
            cout << "True";
        }
        else 
        {
            cout << "False";
        }
    }
    
    void SwapIfLessThan(double a, double b)
    {
        if (a < b)
        {
            int c = a;
            a = b;
            b = c;

            cout <<"\nThe values for the first and second number after the SwapIfLessThan call are " <<a <<" and "<< b;
            cout << " respectively\n";
        }
    }

    string MonthName(int a)
    {
       
        if (a>0 && a<13)
         {
            if ( a == 1)
            {
             cout << "January\n";
            }
            else if ( a == 2)
            {
                cout << "February\n";
            }
            else if ( a == 3)
            {
                cout << "March\n";
            }
            else if ( a == 4)
            {
                cout << "April\n";
            }
            else if ( a == 5)
            {
                cout << "May\n";
            }
            else if ( a == 6)
            {
                cout << "June\n";
            }
            else if ( a == 7)
            {
                cout << "July\n";
            }
            else if ( a == 8)
            {
                cout << "August\n";
            }
            else if ( a == 9)
            {
             cout << "September\n";
            }
            else if ( a == 10)
            {
                cout << "October\n";
            }
            else if ( a == 11)
            { 
                cout << "November\n";
            }
            else if ( a == 12)
            {
                cout << "December\n";
            }
        }

        
        else if (a<= 0 || a> 12)
            {
                cout << " not a valid month!\n";
            }
        
    }


/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls
    
    int num1, num2, num3, num6;
    double num4, num5;

    /* Consecutive numbers */
   
    cout << "\nEnter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    cout << "Enter another number: ";
    cin >> num3;

    cout << "\nIt is "; 
    ConsecutiveNums(num1,num2,num3); 
    cout << " that " << num1;
    cout << ", " << num2 << " and " << num3 << " are consecutive.\n";

    /* Swap */

    cout << "\nEnter a number: ";
    cin >> num4;
    cout << "Enter another number: ";
    cin >> num5;

   cout << "\nThe values for the first and second number before the SwapIfLessThan call are " << num4 << " and " <<num5;
   cout << " respectively\n";
   SwapIfLessThan(num4, num5);
   

    /* Months */

    cout << "\nEnter a number and I'll tell you what month it is: ";
    cin >> num6;

    cout << num6 << " is ";
    MonthName(num6);

    return 0;
}