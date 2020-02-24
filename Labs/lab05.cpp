#include <iostream>
using namespace std;

int main()
{ 
    int x;
    double s, t;
    int n;
    int dy;
    string val;
    int yr;

    cout << boolalpha;

    /*Task 1 Begins*/
    cout << "Task 1\n";
    cout << "Enter an integer: ";
    cin >> x;

    //Assign solution to task 1 to r1; 
    bool r1 = x%3==0 && x%7==0;
    
    cout << "It is " << r1 << " that " << x << " is a multiple of both 3 and 7\n\n";
    /*Task 1 Ends*/


    /*Task 2 Begins*/
    cout << "Task 2\n";
    cout << "Enter a number: ";
    cin >> s;
    cout << "Enter another number: ";
    cin >> t;

    //Assign solution to task 2 to r2; 
    bool r2 = s*t>0 ;
    
    cout << "It is " << r2 << " that " << s << " and " << t << " have the same sign\n\n";
    /*Task 2 Ends*/


    /*Task 3 Begins*/
    cout << "Task 3\n";
    cout << "Enter an integer: ";
    cin >> n;

    //Assign solution to task 3 to r3; 
    bool r3 = n>99 || n<-99;
    
    cout << "It is " << r3 << " that " << n << " is a three digit number\n\n";
    /*Task 3 Ends*/


    /*Task 4 Begins*/
    cout << "Task 4\n";
    cout << "Enter a day: ";
    cin >> dy;

    //Assign solution to task 4 to r4; 
    bool r4 = dy==3 || dy==10 || dy==17 || dy==24;
    
    cout << "It is " << r4 << " that " << dy << " fell on a Monday in the month of February 2020\n\n";
    /*Task 4 Ends*/


    /*Task 5 Begins*/
    cout << "Task 5\n";
    cout << "Enter a word: ";
    cin >> val;

    //Assign solution to task 5 to r5; 
    bool r5 = val=="no" || val=="No" || val=="nO" || val=="NO";
    
    cout << "It is " << r5 << " that " << val << " equals some version of \"no\"\n\n";
    /*Task 5 Ends*/

    /*Task 6 Begins*/
    cout << "Task 6\n";
    cout << "Enter a year: ";
    cin >> yr;

    //Assign solution to task 6 to r6; 
    bool r6 = (yr/4 && !yr/100) || (yr/4 && yr/100 && yr/400);
    
    cout << "It is " << r6 << " that " << yr << " is a leap year\n\n";
    /*Task 2 Ends*/

    
    return 0;
}