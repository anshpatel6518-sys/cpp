#include <iostream>
using namespace std;
class GCD
{
private:
    int a, b;

public:
    int computeGCD(int a, int b)
    {
        if (b == 0)
            return a;
        return computeGCD(b, a % b);
    }
};
int main()
{
    GCD gcdCalculator;
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int result = gcdCalculator.computeGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}