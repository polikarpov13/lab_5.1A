#include <iostream>
#include "Line.h"

using namespace std;

class FirstNotZero { };

int getResult(Line l1, int x) {
    if (l1.getFirst() == 0)
        throw FirstNotZero();
    return l1.getFirst() * x + l1.getSecond();
}

int main()
{
    Line l(1, 13);

    cout << l++ << endl;
    cout << l << endl;
    cout << ++l << endl;
    cout << l << endl;

    Line l1;

    cout << "Enter first and second : ";
    cin >> l1;

    int x;

    cout << "Enter x : " << endl;
    cin >> x;

    try {
        cout << "Result : " << getResult(l1, x) << endl;
    }
    catch (FirstNotZero) {
        cerr << "First can not be zero!" << endl;
    }
    
}
