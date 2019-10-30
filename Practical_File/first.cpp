//Program to demonstrate the use of
//new and delete operator
#include<iostream>
using namespace std;

int main()
{
    //Initialization of pointer ptr to NULL
    int *ptr=NULL;
    //Allocating size of 'int' to pointer ptr
    ptr=new int;
    cout<< "Enter pointer value: ";
    cin>> *ptr;
    cout<< "Pointer value is "<< *ptr;
    //Initialization of Array
    int *array=NULL;
    int i,n;
    cout<< "\n\nEnter no. of elements in Array: ";
    cin>> n;
    //Allocating elements of size 'int'
    array=new int[n];
    cout<< "Enter Array:\n";
    //Entering Elements
    for(i=0;i<n;i++)
    {
        cin>> array[i];
    }
    cout<< "Entered Array is:";
    //Displaying Elements
    for(i=0;i<n;i++)
    {
        cout<< " "<<array[i];
    }
    //Freeing memory
    delete ptr;
    delete array;
    return 0;
}
