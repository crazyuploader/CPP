#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

int prime()
{
    int n,i,m=0;
    cout<< "///Program to Check Prime Number///"<< endl<< endl<< endl;
    cout<< "Enter the Number: ";
    cin>> n;
    for(i=1;i<=n;i++)
        {
            if(n%i==0)
            m++;
        }
    if(m==2)
        {
            cout<< "Number is Prime";
        }
    else
        {
            cout<< "Number is not Prime";
        }
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
    return 0;
}
