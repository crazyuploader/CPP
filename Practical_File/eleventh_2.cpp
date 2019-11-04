//C++ Program for Template Class
#include<iostream>
using namespace std;

template<class T>
class Add
{
    public:
    T add(T A, T B)
    {
        return (A>B)?A:B;
    }
};

int main()
{
    int i1, i2;
    cout<< "Enter two int value(s): \n";
    cin>> i1>> i2;
    Add<int> Int;
    cout<< "\nGreater int among "<< i1<< " and "<< i2<< " is = "<< Int.add(i1,i2)<< endl<< endl;
    return 0;
}
