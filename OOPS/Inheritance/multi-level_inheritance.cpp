#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void Afunc()
    {
        cout << "Func A" << endl;
    }
};

class B : public A
{
public:
    void Bfunc()
    {
        cout << "Func B" << endl;
    }
};

class C : public B
{
public:
};

int main()
{
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}