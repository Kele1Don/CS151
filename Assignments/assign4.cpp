#include <cctype>
#include <iostream> 
#include <string>  
#include <cmath> 
using namespace std;

//Function Definition Here
double EndPoint(double a[], int b, bool c)
{
    if (c==true)
    {
        double max= a[0];
        for (int i=1; i<b; i++)
        {
            if (max < a[i])
            {
             max= a[i];
            }
        }

        return max;
    }
   
    else 
    {
        double min=a[0];
        for (int i=1; i<b; i++)
        {
            if (min> a[i])
            {
                min=a[i];
            }
        }

        return min;
    }
}

void ShiftRemoval(double data[], int n, int idx)
{

    if (idx > 0 && idx < n-1)
    {
        for (int i=idx;i < n-1; i++)
        {
            double temp;

            temp=data[i+1];
            data[i+1]= data[i];
            data[i]=temp;
            
        }
    }

}

int FindPosition(double x[], int y, double z)
{
    int count=0;
    for (int i=0;i<y;i++)
    {
        if (x[i] < z)
        {
            count+=1;
        }
    }

    return count;
}

bool IsInteger(string a)
{
    for (int i=0; i< a.length(); i++)
    {
        if (isdigit(a[i])== false)
        {
            return false;
        }
    }

    return true;
        
}

void SwapAdjacent(double data[],int n, int idx, bool dr)
{
    if (idx>0 && idx<n-1)
    {
        if (dr==true)
        {
            for (int i=0; i<=idx; i++ )
            {
                if (data[i] > data[i+1])
                {
                    int temp;
                    temp=data[i];
                    data[i]=data[i+1];
                    data[i+1]=temp;
                }
            }
        }

        else 
        {
            for (int i=idx; i<=n-1; i++ )
            {
                if (data[i] > data[i+1])
                {
                    int temp;
                    temp=data[i];
                    data[i]=data[i+1];
                    data[i+1]=temp;
                }
            }
        }
    }
}

string convert(int t, string str)
{

    string tens[]={"","", "Twenty", "Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string ones[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    
    string temp="";
    
    if (t>19)
    {
        temp=temp + tens[t/10] + ones[t%10];
    }

    else if (t!=0)
    {
        temp= temp + ones[t];
    }

    
    
    temp= temp + str;
    

    return temp;

}

string SpokenNumber(int num)
{
    string word;
    if (num>99)
    {
        word= word + convert(((num/100)%10), " Hundred ");
    }

    if (num>100 && num%100)
    {
        word= word + " and ";
    }

    if (num<=90)
    {
        word = word + convert((num/100), "");
    
    }

    
    return word;

}

bool TwoSum(int data[],int n, int target)
{
    for (int i=0; i<n; i++)
    {
        for (int j= i+1; j<n; j++)
        {
            if (data[i]+ data[j]== target)
            {
                return true;
            }

            else 
            {
                return false;
            }
        }
    }
}

bool ascending(double x[], int y) 
{
   for (int i=0; i<y; i++)
   {
       if (x[i]==x[i+1])
       {
           continue;
       }

       if (x[i]>x[i+1])
       {
           return false;
       }
   }

   return true;

}

bool descending(double x[], int y) 
{
   for (int i=0; i<y; i++)
   {
       if (x[i]==x[i+1])
       {
           continue;
       }

       if (x[i]<x[i+1])
       {
           return false;
       }
    
   }

   return true;
}

bool IsSorted(double par[], int n)
{
    if (ascending(par, n)== true)
    {
        return true;
    }

    else if (descending(par, n)== true)
    {
        return true;
    }

    else
    {
        return false;
    }

}


int main()
{
    //Function Calls Here
    //For each task provide header comment to separate the calls
   
    //End point

    double m1[]={5,9,1,4,6,3,8};

    cout<<EndPoint(m1, 7, true)<<endl;

    cout<<EndPoint(m1 , 7, false)<<endl<<endl;

    //Shift Removal

   double c2[]={7,2,3,9,4,8};
   ShiftRemoval(c2, 6, 4);

    //Find Position

   cout<< FindPosition(c2, 6, 9.0)<<endl;

    //Is it an integer?

    string in;
    int ke;
    cout<<"Enter a number: ";
    cin>> in;
    
    cout<<IsInteger(in)<<endl;

    //Swap the adjacent

    SwapAdjacent(c2, 6, 4, true);

    //Speak the number

    cout<<SpokenNumber(642)<<endl;

    //Two sum
    int c3[]= {1,5,9,3,8,4};

    cout<<TwoSum(c3, 6, 10)<<endl;

    //Is it sorted?

    cout<<IsSorted(c2, 6)<<" ";

    double c4[]={1,3,4,5,8,9};
    double c5[]={9,8,5,4,3,1};

    cout<<IsSorted(c4, 6) << " ";
    cout<<IsSorted(c5, 6)<< " "<<endl;


    return 0;
}