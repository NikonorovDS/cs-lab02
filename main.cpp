#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";
double a, b;
cin >> a >> b;
cout << "A + B = " << a + b << '\n'
    << "A - B = " << a - b << '\n'
    << "A / B = " << a / b << '\n'
    << "A * B = " << a * b << '\n';

    if (a>b) {
        cout<<"A-max"<<'\n';
    }
    else  cout<<"B-max"<<'\n';

  if (a>b) {
        cout<<"B-min"<<'\n';
    }
    else  cout<<"A-min"<<'\n';

}

