#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int gapful()
{
    int a,b,c,d,temp,n;
    cout<< "///Program for Gapful Number///"<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> a;
    temp=a;
    while(temp!=0)
    {
        temp=temp/10;
        n++;
    }
    if(n==3)
    {
        b=a%10;
        c=a/100;
        c=c%10;
        d=c*10+b;
        if(a%d==0)
        {
            cout<< "\nEntered Number "<< a<< " is a Gapful Number.";
        }
        else
        {
            cout<< "\nEntered Number "<< a<< " is not a Gapful Number.";
        }
    }
    else
    {
        if(n>3)
        {
            cout<< "\nGapful Number can't be more than 3 Digits.";
            cout<< "\nKindly Enter 3 Digits Number.";
        }
        else
        {
            cout<< "\nGapful Number can't be less than 3 Digits.";
            cout<< "\nKindly Enter 3 Digits Number.";
        }
    }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}