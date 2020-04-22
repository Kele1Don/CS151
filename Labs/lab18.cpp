#include <iostream>
using namespace std;

int T(int n)
{
    int s = 1;

    while(n > 0)
    {
        s = s * n;
        n -= 2;
    }
    return s;
}

int main()
{    
    //Write all tasks below here
    int values[5];
    values[2]=12;
    values[0]= T(5);
    values[4]= 3+(2* values[2]);
    values[1]= values[0]-values[4];
    values[3]= 4*(values[0]+ values[1]+values[2]+values[4]);
    cout<< values[1]<<endl;
    cout<< values[3]<<endl;

    int counts[10]= {1,1,1,1,1,1,1,1,1,1};




    return 0;
}