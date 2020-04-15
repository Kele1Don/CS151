#include <iostream>
using namespace std;

/***********************************************
int K(int m,int n)
{
    if(m == 0 || n < 0)
    {
        return 0;
    }
    int r = 1;

    while(n >= 0)
    {
        r *= m;
        n -= 1;
    }
    return r;
}
9**********************************************/

int main()
{
    cout << "Trace Table\n\n";

    cout << "01. m <- -2"<<endl;
    cout << "02. n <- 5" <<endl;
    cout << "03. r <- 1" <<endl;
    cout << "04. r<- -2" <<endl;
    cout << "05. n <- 4"<<endl;
    cout << "06. r <- 4" <<endl;
    cout << "07. n <- 3" <<endl;
    cout << "08. r <- -8" <<endl;
    cout << "09. n <- 2" <<endl;
    cout << "10. r <- 16" <<endl;
    cout << "11. n <- 1"<< endl;
    cout << "12. r <- -32" <<endl;
    cout << "13. n <- 0" <<endl;
    cout << "14. r <- 64" <<endl;
    cout << "15. n <- -1" <<endl;
    cout << "16. return <- 64" <<endl;

    return 0;
}