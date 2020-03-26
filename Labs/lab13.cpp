#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
    void AllChanged(int &num1, int &num2, int &num3)
    {
        int tp = num1;
        int tp2 = num2;
            num1 = num3;
            num2 = tp;
            num3 = tp2;
    }

    void Average (double& x)
    {
       double a,b,c;

        cout << "\nEnter a number: ";
        cin >> a;
        cout << "Enter another number: ";
        cin >> b;
        cout << "Enter another number: ";
        cin >> c;

        x= (a+b+c)/3;
    }

    void ConsecutiveXNum(int& y)
    {

        if (y%2 == 0)
        {
            cout << (y+2);
        }
        else if (y%2 != 0)
        {
            cout << (y+2);
        }

    }

/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls

    /* All Changed */

    int x,y,z;

    cout << "\nEnter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    cout << "Enter another number: ";
    cin >> z;

    cout << "\nThe numbers were entered in this order: ";
    cout << x << ", "<< y << " and "<< z;
    AllChanged(x,y,z);
    cout << "\nThe numbers are now in this order after changing them around: ";
    cout << x << ", "<< y << " and "<< z << endl;

    /* Average */
    double val;

    Average(val);
    cout << "The average of the three numbers entered is: ";
    cout << val << endl;

    /* Consecutive */

    int num;

    cout << "\nEnter a number: ";
    cin >> num;
    
    
    cout <<"\nThe next consecutive number is: ";
    ConsecutiveXNum(num);
    cout<< endl;

    return 0;
}