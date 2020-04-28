#include <cctype>
#include <iostream> 
#include <string>  
#include <iomanip> 
#include <cmath> 
using namespace std;

//Function Definition Here

void ReturnMessage (string name, int time)
{
    cout <<name << " is away right now and will receive in " <<time <<" minute(s)";
}

double Distance3D(double x1, double y1, double z1, double x2, double y2, double z2)
{
    return sqrt(pow((x2-x1),2)+ pow((y2-y1),2)+ pow((z2-z1), 2));
}

string IsEvenOrOdd(int x)
{
    if  (x%2==0)
    {
        return "is even";
    }

    else
    {
        return "is odd";
    }
}

double Polynomial (double a, double b, double c, double x)
{
    return a * pow (x, 2) + b * x + c;
}

string Square ()
{
    string sqre;
    for (int count=1; count <= 10; count++)
    {
        sqre+= "**********\n";
    }
    return sqre;
}

bool IsIsoscelesTriangle (double a, double b, double c)
{
    if (a>0 && b>0 && c>0)
    {
        if((a==b && b==c) || (b==c && a==c) || (a==c && a==b))
        {
            return true;
        }
    }

    else 
    {
        return false;
    }
}

string Echo ()
{
    string msg, msgs;
    cout << "Enter a message: ";
    cin >> msg;

    msgs= msg+"\n"+msg;
    return msgs;
}

bool ConsecutiveOdd(int x, int y)
{
    if (x%2 !=0 && y%2 !=0)
    {
        if(x-y==2 || y-x==2)
        {
            return true;
        }
    }

    else 
    {
        return false;
    }
} 

int NextLeapYear(int year)
{
    if (year%2==0)
    {
        return year+4;
    }

    else
    {
        return 4;
    }
}

void RearrangeCharacters(char a, char b, char c)
{
   char t;
    if (a!=b && b!=c && c!=a)
    {
        t=a;
        a=b;
        b=c;
        c=t;
    }
    cout<< a<<endl<<b<<endl<<c;
}

void NumericalSwap(double&x, double&y)
{
    x = x - y;
    y = x + y;
    x = y - x;
}

void CapLock(char x)
{
  if (isalpha(x))
  {
    if (islower(x))
    {
        x= toupper(x);
    }

    else if (isupper(x))
    {
        x= tolower(x);
    }
  }

  cout<< x;

}

string IntToStr(int a)
{
    char res[100];
   if(a>100)
   {
       res[0]='0';
       res[1]='\0';
       return res;
   }
   else
   {
  
       int len = 0;
       for(; a > 0; ++len)
       {
           res[len] = a%10+'0';
           a/=10;
       }
       res[len] = '\0'; 
      
      
       for(int i = 0; i < len/2; ++i)
       {
           char c = res[i];
           res[i] = res[len-i-1];
           res[len-i-1] = c;
       }
   }
   return res;
}

int MultipleQuotient(int n, int m)
{
    abs(n);
    abs(m);

    if (m!=0 && n%m==0)
    {
        return n/m;
    }
        
    else
    {
        return n;
    }

}

string DayOfTheWeek(int x)
{
    if (x>=1 && x<=7)
    {
        if (x==1)
        {
            return "Sunday";
        }

        if (x==2)
        {
            return "Monday";
        }

        if (x==3)
        {
            return "Tuesday";
        }

        if (x==4)
        {
            return "Wednesday";
        }

        if (x==5)
        {
            return "Thursday";
        }

        if (x==6)
        {
            return "Friday";
        }

        if (x==7)
        {
            return "Saturday";
        }
    }

    else
    {
        cout<<string();
    }
}

double Median(double d1, double d2, double d3, double d4)
{
   double d[] = {d1, d2, d3, d4};
    for(int i = 0; i < 4; i++)
    {
        for(int j = i + 1; j < 4; j++)
        {
            if(d[i] > d[j])
            {
                double tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }

    return (d[1] + d[2]) / 2;

}

double Minimum(double w, double x, double y, double z)
{
    if (w<x && w<y && w<z)
    {
        return w;
    }

    else if (x<w && x<y && x<z)
    {
        return x;
    }

    else if (y<w && y<x && y<z)
    {
        return y;
    }

    else if (z<w && z<x && z<y)
    {
        return z;
    }
}

string ColorCode(int a)
{
    if (a%3==0)
    {
        if(a%3==0 && a%4==0)
        {
            return "purple";
        }
        else 
        {
            return "red";
        }
            
    }

    else if (a%4==0)
    {
        return "blue";
    }

    if(a%3==0 && a%4==0)
    {
        return "purple";
    }
    
    else 
    {
        return "yellow";
    }
}

double NonNegativeMean(double n[])
{
   double count=0,total=0;
   for(int i=0;i<5;i++)
   {
       if(n[i]>0)
       {
           total+=n[i];
           count++;
       }
   }
  
   if(count==0)
   {
       return 0;
   }

   else
   {
       return total/count;
   }
      
return 0;
}

void Permutation(int a, int b, int c, int d)
{
    int A[] = {a, b, c, d};
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                for(int l = 0; l < 4; l++)
                {
                    if(i != j && i != k && i != l && j != k && j != l && k != l)
                    {
                        cout<<"["<<A[i]<<", "<<A[j]<<", "<<A[k]<<", "<<A[l]<<"]"<<endl;
                    }
                }
            }
        }
    }

}

void Sort(double a, double b, double c, double d, double e)
{

}

string FirstDayOfTheYear(int year)
{
    if(year<1900 || year>9999)
    {
        return "Cannot determine";
    }

    int month = 1;
    int day = 1;
    int oddDays;
    int monthOdd[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    
    
    year = year -1;
  
    oddDays = year + year/4 + year/400 - year/100;
    oddDays += monthOdd[month - 1] + day;
    oddDays = oddDays % 7;

    return DayOfTheWeek(oddDays);
    
}

double TemperatureConverter(double Temp, char From, char To)
{

    if(From=='F' || From=='f')
    {

        if(To=='C' || From=='c')
        {
            return (Temp - 32) * 5/9.0;
        }
        else if(To=='K' || To=='k')

        return (Temp - 32) * 5/9.0 + 273.15;

    }

    else if(From=='C' || From=='c')
    {

        if(To=='F' || To=='f')

        return Temp * (9/5.0) + 32;

        else if(To=='K' || To=='k')

        return Temp + 273.15;

    }

    else if(From=='K' || From=='k')
    {

        if(To=='F' || To=='f')
        {
            return (Temp - 273.15) * 9/5.0 +32;
        }

    else if(To=='C' || To=='c')
    {
        return Temp - 273.15;

    }

    }

    return Temp;

}



int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
    
    //Return Message

    string n;
    int t;

    cout <<"\nPlease enter your name: ";
    cin>> n;
    cout << "Please enter how much time it will take in minutes to return the call: ";
    cin>> t;

    ReturnMessage(n,t);
    cout<<endl;

    //Distance 3D

    double d1,d2,d3,d4,d5,d6;

    cout<< "\nEnter six points and I will tell you the distance between them: ";
    cin>>d1>>d2>>d3>>d4>>d5>>d6;
    cout<<"The distance is "<<Distance3D(d1, d2, d3, d4, d5, d6);
    cout<<endl;

    //Even or Odd

    int num;
    cout<<"\nEnter a number: ";
    cin>>num;
    cout<<"The number "<<num<<" "<<IsEvenOrOdd(num);
    cout<<endl;

    //Polynomial

    double w,v,u,z;
    cout << "\nEnter the polynomial you want to evaluate: ";
    cin>>w>>v>>u>>z;

    cout<<"The evaluation is: "<<Polynomial(w, v, u, z);
    cout<<endl;

    //Square

    cout<<endl;
    cout<<Square();
    cout<<endl;

    //Isosceles Triangle

    double point1,point2,point3;
    cout<<"\nEnter 3 points and I will determine it they make an Isosceles triangle: ";
    cin>>point1>>point2>>point3;

    cout<<IsIsoscelesTriangle(point1, point2, point3);
    cout<<endl;

    //Echo
    cout<<endl;
    cout<<Echo();
    cout<<endl;

    // Consecutive Odd number

    int odd1,odd2;
    cout << "\nEnter two odd numbers and I will let you know if they are consecutive: ";
    cin>>odd1>>odd2;
    cout<<ConsecutiveOdd(odd1, odd2);
    cout<<endl;

    //Next Leap year

    int yr1;
    cout<<"\nEnter a leap year: ";
    cin>> yr1;

    cout<<"The leap year after that is: "<<NextLeapYear(yr1);
    cout<<endl;
    
    //Rearrange Characters

    char c1,c2,c3;
    cout <<"\nEnter three characters: ";
    cin>>c1>>c2>>c3;
    cout<<"At first they were in this order: "<<c1<<endl<<c2<<endl<<c3<<endl;
    cout<<"Now they are in this order: ";
    RearrangeCharacters(c1, c2, c3);
    cout<<endl;

    //Numerical swap

    double x, y;
    cout<<"\nEnter two numbers: ";
    cin>>x>>y;
    cout << "\nBefore swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    NumericalSwap(x, y);

    cout << "\nAfter swapping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    //CapLock
    
    char cap;
    cout<<"\nEnter a letter and I will display the opposite case: ";
    cin>>cap;
    CapLock(cap);
    cout<<endl;

    //Integer to string 
    
    int ft;

    cout << "\nEnter a number: ";
    cin>> ft;

    cout<<IntToStr(ft)<<endl;

    //Multiple Quotient
    int m1,m2;

    cout<<"\nEnter two numbers and I'll return the quotient: ";
    cin>>m1>>m2;
    cout<<"The quotient is: "<<MultipleQuotient(m1, m2)<<endl;

    //Day of the Week
    int dy;
    cout<<"\nEnter a number and I'll tell you what day of the week it is: ";
    cin>>dy;

    cout<<dy<<" is "<<DayOfTheWeek(dy)<<endl;

    //Median
    int n1,n2,n3,n4;

    cout<<"\nEnter four numbers and I'll tell you the median: ";
    cin>>n1>>n2>>n3>>n4;

    cout<<"The median of the four numbers:\n"<<n1<<","<<n2<<","<<n3<<" and "<<n4;
    cout<<" is "<< Median(n1, n2, n3, n4);
    cout<<endl;

    //Minimum
    double mp1,mp2,mp3,mp4;
    cout<<"\nEnter four numbers in any order and I'll tell you the minimum: ";
    cin>>mp1>>mp2>>mp3>>mp4;
    cout<<"The minimum value of the four numbers is: ";
    cout<<Minimum(mp1, mp2, mp3, mp4)<<endl;


    //Color Code
    int clr;
    cout<<"\nEnter a number and I'll match it with a color: ";
    cin>>clr;
    cout<<"That number is the code for ";
    cout<<ColorCode(clr)<<endl;

    //NonNegativeMean

    double q[5];
    cout<<"\nEnter 5 Numbers and I'll give you the mean: ";
    for(int i=0;i<5;i++)
    {
        cin>>n[i];
    }
    cout<<"Result of NonNegativeMean is: "<<NonNegativeMean(q);
    cout<<endl;


    //Permutation
    int p1,p2,p3,p4;

    cout<<"\nEnter four numbers and I will provide all the combinations of them: ";
    cin>>p1>>p2>>p3>>p4;

    cout<<"\nThe combinations are: "<<endl;
    Permutation(p1, p2, p3, p4);
    cout<<endl;

    //Sort

    //First day of the year

    int yr;

    cout<<"\nEnter a year and I'll tell you what day of the week it started on: ";
    cin>>yr;
    string weekDay = FirstDayOfTheYear(yr);

    cout<<"The first day of the year is: "<<weekDay;
    cout<<endl;
  
    //Temperature Converter
    


    return 0;
}