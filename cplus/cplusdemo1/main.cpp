#include <iostream>

using namespace std;

int main()
{   int value1,value2,total,op;
    cout << "enter value 1\t" ;
    cin >> value1;
    cout << "enter value2\t";
    cin >> value2;
    cout << "enter operter\t" ;
    cin >> op ;
    switch(op)
    {
    case 1:
        total = (value1 + value2);
        cout << "added value of a and b " <<total;
        break;
    case 2:
        total = value1 - value2;
        cout << "subtract value of a and b "<<total;
        break;
    case 3:
        total = value1 * value2;
        cout << "multipication value of a and b "<<total;
        break;
    case 4:
        total = value1++;
        cout << "increment value of a and b "<<total<<"\t"<<value1;
        break;
    case 5:
        total = value2-- ;
        cout << "dicrement value of a and b "<<total<<"\t"<<value1;
        break;
    case 6:
        total = (value1 / value2);
        cout << "divition value of a and b " <<total;
        break;
    case 7:
        total = (value1 % value2);
        cout << "modulus value of a and b " <<total;
        break;
         }
}
