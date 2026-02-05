#include<iostream>
using namespace std;
class factorial{
    private:
        int num;
    public:
        int computeFactorial(int n){
            if(n <= 1)
                return 1;
            return n * computeFactorial(n - 1);
        }
};
int main(){
    factorial factCalculator;
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    int result = factCalculator.computeFactorial(number);
    cout << "Factorial of " << number << " is: " << result << endl;
    return 0;
}