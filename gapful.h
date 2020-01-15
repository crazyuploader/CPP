#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int gapful()
{
    int a,b,c,d;
    cout<< "///Program for Gapful Number///"<< endl<< endl;
    cout<< "Enter Number: ";
    cin>> a;
    b=a%10;
    c=a/100;
    c=c%10;
    d=c*10+b;
    if(a%d==0)
        {
            cout<< "Entered Number "<< a<< " is a Gapful Number.";
        }
    else
        {
            cout<< "Entered Number "<< a<< " is not a Gapful Number.";
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}