#include <iostream> //cout, cin, fixed
#include <string> //string 
#include <iomanip> //setprecision
#include <cmath> //exp, log, pow
using namespace std;

int main()
{
    //Write Entire Code In This Body

    string firstName, lastName;
    int age, percentageRate;
    double principle;
    const double e= 2.71828;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your initial investment: ";
    cin >> principle;
    cout << "Enter interest rate: ";
    cin >> percentageRate;

    double rate= percentageRate/100.0;
    double APY1= percentageRate;
    double APY2= (pow((1+ rate/12),12)-1)*100;
    double APY3= (pow((1+ rate/365),365)-1)*100;
    double APY4= (pow(e,rate))*100;
    double interest1= principle*(pow((1+rate),5)-1);
    double interest2= principle*(pow((1+rate/12),60)-1);
    double interest3= principle*(pow((1+rate/365),1825)-1);
    double interest4= principle*(pow(e,(rate*5))-1);
    double doublePrinciple= 2*principle;
    int time= (log(2)/rate)+0.5;
    int newAge= age+time;

    cout << fixed << showpoint << setprecision(2);
    cout << "If " <<firstName << " "<< lastName << " invests $" <<principle;
    cout << " at a rate of " << percentageRate<< "% "<<endl;
    cout << firstName <<" "<< lastName<< " will have an annual percentage yield (APY) of: "<<endl;
    cout << fixed << showpoint << setprecision(3);
    cout << APY1<< " if compounded yearly."<<endl;
    cout << APY2<< " if compounded monthly."<<endl;
    cout << APY3<< " if compounded daily."<<endl;
    cout << APY4<< " if compounded continuously."<<endl;
    cout << "Hence, in five years," <<firstName <<" "<<lastName<< " will earn an interest of \n";
    cout << fixed << showpoint << setprecision(2);
    cout << "$"<< interest1<< " if compounded yearly.\n";
    cout << "$" << interest2<< " if compounded monthly.\n";
    cout << "$"<< interest3 << " if compounded daily.\n";
    cout << "$"<< interest4 << " if compounded continuously.\n";
    cout << "The initial investment of $" <<principle<< " will double to $";
    cout << doublePrinciple<< " in "<<time<< "year(s).\n";
    cout << firstName<<" "<< lastName<< " will be "<< newAge<< " years old.\n";







    return 0;
}