#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
void CountDown (int a)
{
    while(a>0)
    {
        cout <<a <<endl;
        a= a-1;
    }
}

int PositiveMultipleOf3()
{
    int b;

    cout<< "Enter a positive multiple of 3: ";
    cin>> b;

    while (b<=0 || b%3!=0)
    {
        cout <<"That is not a positive multiple of 3\n";
        cout<< "Please try again!\n";
        cin>> b;
    }

    cout<< b;
}


int SumOfOdds(int c)
{
    int sum= 0;

    if (c<=0)
    {
        cout <<0;
    }

    int i=1;
    while (i <= c)
    {
        if (i%2 != 0)
        {
            sum+= i;
        }
        i=i+1;
    }

    cout << sum;
}

/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls
    //CountDown

    int num;
    cout << "\nEnter a number and I will countdown from it: ";
    cin>> num;

    CountDown(num);
    cout <<endl;

    //Positive Multiples of 3

    PositiveMultipleOf3();
    cout <<endl;

    //Sum of Odds

    int num1;

    cout<< "Enter a number: ";
    cin>> num1;

    cout<< "The sum of odd numbers between 1 and " << num1 << " is ";
    SumOfOdds(num1);
    cout<< endl;

    return 0;
}