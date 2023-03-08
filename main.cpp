#include <iostream>
using namespace std;

int meniu(int a, int b)
{
    char op;
    cin>>op;
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
}


int main()
{
    int a, b;
    cout<<"Introduceti primul numar";
    cin >> a;
    cout<<"Introduceti al doilea numar";
    cin >> b;
    cout<< meniu(a,b);
    return 0;
}
