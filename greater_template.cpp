#include<iostream>
using namespace std;
#define NEWLINE '\n'
#define TAB '\t'

template<class T>
T Large(T x, T y)
{
    return (x>y)?x:y;
}

int main()
{
    int i1,i2;
    float f1,f2;
    char c1,c2;
    cout<< "///Program to Display Greater Number using Template///"<< endl<< endl<< endl;
    cout<< "Enter Integers: ";
    cin>> i1>> i2;
    cout<< "Enter Floating Point: ";
    cin>> f1>> f2;
    cout<< "Enter Character: ";
    cin>> c1>> c2;
    cout<< "The Larger Number is = "<< Large(i1,i2)<< endl;
    cout<< "The Larger Number is = "<< Large(f1,f2)<< endl;
    cout<< "The Larger Number is = "<< Large(c1,c2)<< endl;
    cout<< NEWLINE<< NEWLINE<< "Created by Jugal Kishore -- 2019"<< NEWLINE;
}
