#include <iostream>
using namespace std;

void TraceTable()
{
    /*Write the trace of the function below:
    bool Q(int A[],int n)
    {
        bool fd = false;

        for(int i = 0;i < n - 1;i += 1)
        {
            if(A[i] == A[i+1])
            {
                if(fd == false)
                {
                    fd = true;
                    continue;
                }
                return true;
            }
        }
        return false;
    }
    */
    return;
}

//Define second task function below here

int main()
{    
    //Write call all tasks below here

    cout <<"Trace Table\n\n";
    cout<<"01. A <- 2,3,5,4,5,5,3,7,7,9\n";
    cout<<"n <- 10\n";
    cout<<"02. fd <- false\n";
    cout<<"03. i <- 0\n";
    cout<<"04. i<n-1 <- true\n";
    cout<<"05. A[i]==A[i+1] <- false\n";
    cout<<"06. i <- 1\n";
    cout<<"07. i<n-1 <- true\n";
    cout<<"08. A[i]==A[i+1] <- false\n";
    cout<<"09. i <- 2\n";
    cout<<"10. i<n-1 <- true\n";
    cout<<"11. A[i]==A[i+1] <- false\n";
    cout<<"12. i <- 3\n";
    cout<<"13. i<n-1 <- true\n";
    cout<<"14. A[i]==A[i+1] <- false\n";
    cout<<"15. i <- 4\n";
    cout<<"16. i<n-1 <- true\n";
    cout<<"17. A[i]==A[i+1] <- true\n";
    cout<<"18. fd==false <- true\n";

    cout<<"At the end of the call the function will return true. \n";

    
    return 0;
}