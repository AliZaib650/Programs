#include<iostream>
using namespace std;

int main()
{ 
    int marks;
    cout<< "Enter your marks out of 100: ";
    cin>> marks;

    if(marks>=70)
    {cout<< "Grade=A";}
        else if(marks>=60 && marks<70)
        {cout<< "Grade=B+";}
            else if(marks>=50 && marks<60)
            {cout<< "Grade=B";}
                else if(marks>=40 && marks<50)
                {cout<< "Grade=C";}
                    else if(marks<40)
                    {cout<< "Grade=F";}
     return 0;                  
 }

