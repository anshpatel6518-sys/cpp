#include<iostream>
using namespace std;
class fibo{
    private:
        int n;
    public:
        int computeFibo(int n){
            if(n <= 1)
                return n;
            return computeFibo(n - 1) + computeFibo(n - 2);
        }
};
int main(){
    fibo fiboCalculator;
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    int result = fiboCalculator.computeFibo(number);
    cout << "Fibonacci of " << number << " is: " << result << endl;
    return 0;
}