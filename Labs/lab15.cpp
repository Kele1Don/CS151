#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
    int GCD (int a, int b)
    {
        if (b < 0)
        {
            b= (b * -1);
        }

        else if (a<0)
        {
            a= (a * -1);
        }
        
       if (a>=0 && b>=0)
       {
            if (a==0)
            {
                return b;
            }

            else if (b==0)
            {
                return a;
            }

            else if (a==b)
            {
                return a;
            }

            else if (a>b)
            {
                return GCD(a-b, b); 
            }

            else
            {
                return GCD(a, b-a); 
            }
       }

    }

    int Sigma (int n)
    {   
        if (n < 0)
        {
            n= (n * -1);
        }

        int sum;

        for(int count=1;count <=n; count++)
        {
            if (n % count==0)
            {
                sum += count;
            }
        }
        return sum;    
    }



/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls

    //GCD

    int x,y;

    cout << "\nEnter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;


    cout << "The greatest common divisor of " << x << " and " << y;
    cout << " is ";
    cout <<GCD(x, y);
    cout <<endl;

    //Sum of the factors

    int K;

    cout << "\nEnter a number and I will tell you the sum of its factors: ";
    cin >> K;

    cout << "\nThe sum of the factors of " << K << " is " << Sigma(K) << " in total."<<endl;

    return 0;
}