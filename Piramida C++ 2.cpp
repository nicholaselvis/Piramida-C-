#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
 
    cout <<"masukkan baris: ";
    cin >> b;
 
    for(int i = 1, k = 0; i <= b; i++, k = 0)
    {
        for(a = 1; a <= b-i; a++)
        {
            cout <<"  ";
        }
 
        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
