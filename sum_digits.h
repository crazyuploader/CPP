#include<iostream>
using namespace std;
#define TAB '\t'
#define NEWLINE '\n'

int sum_digits()
{
    int num,sum=0,r,temp;
    cout<< "///Program to Display Sum of its Digit(s)///"<< endl<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> num;
    temp=num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<< "\nSum of Digit(s) of Entered Number "<< temp<< " is "<< sum;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
