//Program to demonstrate the use of new and delete operator
#include<iostream>
using namespace std;

int main()
{
    //Initialization pointer p to NULL
    int *p=NULL;
    p=new int;
    cout<< "Pointer value is "<< *p;
    //Freeing pointer p now
    delete p;
    return 0;
}
