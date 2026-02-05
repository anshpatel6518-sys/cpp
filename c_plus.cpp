#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int add(int a, int b);
double area(double radius);
void greet(string msg);
int main()
{
    int a,b;
    double radius;
    string msg ;
    cout << "Enter two numbers to add: ";
    cin >> a >> b;
    cout << "Enter message to greet: ";
    cin >> msg;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cin.ignore();
    greet(msg);
    int sum = add(a, b);
    cout << "sum is :" << sum << endl;
    double result = area(radius);
    cout << "Area of circle is:" << result << endl;
    return 0;
}
int add(int num1, int num2)
{
    return num1 + num2;
}
void greet(string msg)
{
    cout << msg << endl;
}
double area(double radius)
{
    const double pi = 3.14;
    double areacircle = pi * pow(radius, 2);
    return areacircle;
}
