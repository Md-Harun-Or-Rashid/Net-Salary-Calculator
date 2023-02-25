#include <iostream>
using namespace std;
/*
The program calculates the total amount of work hours during a given time frame, the average workday length, gross income and net income.
*/
int main(){
int days,i, n=1;
float workingHours[31],totalHours,perHourSalary,taxRate,otherContribution,totalContribution;
cout<<"The program calculates \n the total amount of work hours during a given time frame, the average work day length, gross income and net income.\n";
cout<<"How much do get per hour ?\n";
cin>>perHourSalary;
cout<<"Please enter the tax percentage: ";
cin>>taxRate;
cout<<"Please enter the other deductions from earned income\n[daily allowance contributions, pension, insurance, and unemployment insurance] in percentage."<<endl;
cin>>otherContribution;
totalContribution=taxRate+otherContribution;
cout<<"How many days have you worked?\n";
cin>>days;
for (i=0;i<days;i++)
{
cout<<"Please enter the working hours of day "<<n++<<": ";
cin>>workingHours[i];
totalHours=totalHours+workingHours[i];
}
cout<<"In "<<days<<" days, you have worked total : "<<totalHours<<" hours."<<endl;
cout<<"Average working hours per day is : "<<totalHours/days<<endl;
cout<<"Gross income: "<<totalHours*perHourSalary<<endl;
cout<<"Net income is : "<<totalHours * perHourSalary-(totalHours*perHourSalary/100*totalContribution)<<endl;
cout<<"Net Income = Total income – Total deduction [tax,daily allowance contributions, pension, insurance, and unemployment insurance]"<<endl;
cout<<"You entered the following work hours: ";
for (i=0;i<days;i++){
	cout<<workingHours[i]<<" ";
}
cout<<endl;
}

