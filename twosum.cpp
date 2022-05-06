#include<iostream>
using namespace std;
int main ()
{
    int array[8] = {7,13,65,9,5,80,12,5};
    for (int a=0; a<8;a++)
    {
        cout<<array[a]<<", ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"La suma de ambas posiciones es: ";
    cout<<array[2]+array[6];
    return 0;
}
