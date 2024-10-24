#include<iostream>
using namespace std;

class Circle
{
    double R;
    const double PI = 3.14;
public:
    Circle() 
    {
        R = 0;
    }
    Circle(double r) :R(r) {}
    void Print() 
    {
        cout << "R:" << R << endl;
    }
    bool operator==(Circle& b)
    {
        return R == b.R;
    }
    bool operator>(Circle& b)
    {
        return 2 * PI * R > 2 * PI * b.R;
    }
    Circle& operator+=(int a) 
    {
        R += a;
        return *this;
    }
    Circle& operator-=(int a) 
    {
        R -= a;
        if (R < 0) R = 0; 
        return *this;
    }
};

int main() {
    Circle c1(5), c2(10); 

    c1.Print(); 
    c2.Print(); 
    if (c1 == c2) 
    {
        cout << "c1 == c2" << endl;
    }
    else 
    {
        cout << "c1 != c2" << endl;
    }
    if (c1 > c2) 
    {
        cout << "c1 > c2" << endl;
    }
    else 
    {
        cout << "c1 < c2" << endl;
    }
    c1 += 3;
    cout << "After < c1: ";
    c1.Print();
    c2 -= 4;
    cout << "After > c2: ";
    c2.Print();
    return 0;
}

