#include <cctype>
#include <cstdlib>
#include <iostream> 
#include <string>  
#include <cmath> 
using namespace std;

//Function Definition Here

void Initialize(double t[], int u, double v)
{

    for (int i=0; i<u; i++)
    {
        t[i]=v;
    }

}

double Power(double a, int b)
{
    if (b>0)
    {
        return pow(a,b);
    }
    else 
    {
        return 0;
    }
}

bool TwoInARow(int x[], int y)
{
    for(int i = 0; i<y ;i += 1)
    {
        if(x[i] == x[i+1])
        {
            return true;
        }

        else 
        {
            return false;
        }

    }
}

double Average(double t[],int u )
{
    t[u];
    int avg;
    for (int i=0; i<u; i++)
    {
        avg= t[i];
    }

    return avg/u;
}

int CharactersCount(string a, char b, char c)
{
    int count,count2;

    for (int i=0; i< a.length();i++)
    {
        if (a[i] == b)
        {
            count++;
        }

        if (a[i] == c)
        {
            count2++;
        }
    }

    return count+count2;
}

void Reverse(double b[], int d)
{
    b[d];

    int i=0;
    b[i]=b[d-1];

    for (; i<d; i++)
    {
        b[i]=b[d-i];
    }
}

bool Search(int data[], int n, int value)
{
    data[n];
    for (int i; i<n; i++)
    {
        if (value == data[i])
        {
            return true;
        }

        else  
        {
            return false;
        }
    }    
}

int ConsecutiveOddSquareSum(int j)
{
    int sum;

    if (abs(j)%2 !=0)
    {
        for (int c=1; c<=j; c+=2)
        {
            sum+= pow(c, 2);
        }
    }

    return sum;

}

void SquareRootBound(double a, int& b, int& c)
{
    if (a>0)
    {
       double temp= pow(a, 1/2);
       b= temp-1;
       c= temp+1;
    }

    else 
    {
        b=0;
        c=0;
    }
}

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

bool RelativelyPrime(int x, int y)
{
    
    if (GCD(abs(x), abs(y))== 1)
    {
        return true;
    }

    else 
    {
        return false;
    }

}

double SecondMaximum(double m[], int n)
{
   double max= m[0];
    double max2= 0;
    for (int i=1; i<n; i++)
    {
        if (max < m[i])
        {
            max= m[i];
        }
    }

    for (int c=0; c<n; c++)
    {
       
        if (max== m[c])
        {
            c+=1;
        }

        if (max2< m[c])
        {
            max2= m[c];
        }
        
    }

    return max2;
}

int PrimeCount(int m, int n)
{
    m= abs(m);
    n= abs(n);
    int count=0;

    if (m< n)
    {
        while (m != n)
        {
            
            n-=1;

            if (m%2 != 0)
            {
                cout << m<< " ";
                count++;
            }

        }
    }

   if (m>n)
   {
        while (m != n)
        {
            m-=1;

            if (n%2 != 0)
            {
                cout << n<< " ";
                count++;
            }

        }
   }

   return count;
}

string ToLowerCase(string k)
{
    string i;
    char p;

    for (int cn=0; cn<k.length(); cn++)
    {
        p=tolower(k[cn]);
        i+=p;
    }

    return i;

}

int PhiSquareSum (int a)
{
    int sum=0;
    for (int count=1; count < pow(a,2); count++)
    {
        if (RelativelyPrime(count, pow(a,2)) == true)
        {
            sum+=count;
        }
    }

    return sum;
}

double Variance (double data[], int n)
{
    double var,sum;
    var=Average(data, n);

    for(int i=0; i<n; i++)
    {
        sum+=pow(data[i]-var,2);

    }

    return sum/n;
}



int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
    
    //Initialize
    int n2;
    

    cout<<"Enter the number of inputs you have: ";
    cin>> n2;
    double arm[n2], no;

    int count=0;
    while (count<n2)
    {
        cout<<"Input a number: ";
        cin>> no;
        arm[count]= no;
        count+=1;
    }
    Initialize(arm, n2, no);
    cout<<endl;

    //Power
    double ex;
    int p;

    cout<< "Enter a number: ";
    cin>> ex;
    cout<< "Raise that number to: ";
    cin>> p;

    cout<<Power(ex, p)<<endl;
    
    //Two in a row
    int si;

    cout<<"How much inputs do you have? ";
    cin>> si;
    int vb[si], in;

    int cunt =0;
    while (cunt<si)
    {
        cout<<"Input a number: ";
        cin>> in;
        arm[cunt]= in; 
        cunt+=1;
    }

    cout<<TwoInARow(vb, si)<<endl;


    //Average
    int kp;
    cout<<"Enter the number of inputs you have to average out: ";
    cin>>kp;

    double avrg[kp], pk;

    int c=0;
    while (c<kp)
    {
        cout<<"Enter it/them: ";
        cin>>pk;
        avrg[kp]=pk;
        c+=1;
    }

    cout<<Average(avrg, kp)<<endl;

    //Characters Count
    char l,i;
    string lip;

    cout<<"Enter two letters you need to be counted in a word: ";
    cin>>l>>i;
    cout<<"Enter the word with these letters: ";
    cin>> lip;

    cout<<CharactersCount(lip, l, i)<<endl;


    //Reverse
    int m;

    cout<<"How much elements do you have to enter? ";
    cin>>m;
    double rv[m], rvr;

    int c1=0;

    while (c1<m)
    {
        cout<< "Enter the elements and I will reverse them: ";
        cin>>rvr;
        rv[m]= rvr;
        c1+=1;
    }

    Reverse(rv, m);
    cout<<endl;

    //Search
    int val, n1;

    cout<<"How much data do you have to enter? ";
    cin>>n1;
    int dat[n1], numz;

    int c2=0;
    while (c2<n1)
    {
        cout<<"\nEnter the numbers: ";
        cin>>numz;
        dat[c2]=numz;
        c2+=1;
    }

    cout<<"\nEnter the number you want to search for: ";
    cin>>val;

    cout<<Search(dat,n1,val)<<endl;

    //Consecutive Odd Square
    int od;

    cout<<"Enter a number and I will produce the odd squares between it and 1: ";
    cin>> od;
    cout<<ConsecutiveOddSquareSum(od)<<endl;
    
    //Sqaure root bound
    double parm;
    int a1,b1;
    
    cout<<"Enter a positive number: ";
    cin>> parm;

    SquareRootBound(parm, a1, b1);

    //Relatively Prime
    int bo, ol;

    cout<<"Enter two numbers that are relatively prime: ";
    cin>>bo>>ol;

    cout<<"It is ";
    RelativelyPrime(bo, ol);
    cout<<" that the numbers entered are relatively prime."<<endl;

    //Second Maximum
    int n;
    cout<<"How much numbers are you entering? ";
    cin>>n;

    double num[n],nume;
    int c3=0;
    while (c3>n)
    {
        cout<<"Enter a number: ";
        cin>>nume;
        num[c3]=nume;
        c3+=1;
    }
    cout<<SecondMaximum(num, n)<<endl;
    
    //Prime Count

    int x,y;

    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<endl<<PrimeCount(x, y)<<endl;

    
    //Lower case
    string up;

    cout<<"Enter a word and I will give it int lower case: ";
    cin>>up;

    cout<<ToLowerCase(up)<<endl;

    //Phi Square Sum
    int phi;

    cout<<"Enter a number and I will display the sum of";
    cout<<" all the prime numbers between 1 and the square of your number: ";
    cin>>phi;

    cout<<PhiSquareSum(phi)<<endl;

    //Variance
    int n5;

    cout<<"How much elements do you have to enter to find the variance? ";
    cin>>n5;
    double n8[n5], nbr;

    int c4=0;
    while (c4<n5)
    {
        cout<<"/nEnter those elements: ";
        cin>> nbr;
        n8[c4]=nbr;
        c4+=1;
    }

    cout<<"The variance is: ";
    cout<<Variance(n8, n5);

    return 0;
}