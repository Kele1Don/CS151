#include <iostream>
using namespace std;

/***********************************************
int V(int n)
{
    int t;
    int s = 0;

    for(int i = 1;i <= n;i = i + 1)
    {
        t = 0;

        for(int j = 1;j <= i;j = j + 1)
        {
            t += j;
        }
        s += t;
    }
    return s;
}
9**********************************************/

int main()
{
    cout << "Trace Table\n\n";
    cout<<"01. n <- 2";
    cout<<"02. s <- 0";
    cout<<"03. i <- 1";
    cout<<"04. i<=n <- T";
    cout<<"05. t <- 0";
    cout<<"06. j <- 1";
    cout<<"07. j<=i <- T";
    cout<<"08. t <- 1";
    cout<<"09. j <- 2";
    cout<<"10. j<=i <- F";
    cout<<"11. s <- 1";
    cout<<"12. i <- 2";
    cout<<"13. i<=n <- T";
    cout<<"14. t <- 0";
    cout<<"15. j <- 1";
    cout<<"16. j<=i <- T";
    cout<<"17. t <- 1";
    cout<<"18. j <- 2";

    cout<<"At the end of the call the function will return the number 4";

    return 0;
}