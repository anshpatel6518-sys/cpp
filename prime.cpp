#include<iostream>
using namespace std;
class prime{
    private:
        int num;
    public:
    void checkPrime(int n){
        if(n <= 1){
            cout << n << " is not a prime number." << endl;
            return;
        }
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0){
                cout << n << " is not a prime number." << endl;
                return;
            }
        }
        cout << n << " is a prime number." << endl;
    }
};
int main(){
    prime primeChecker;
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    primeChecker.checkPrime(number);
    return 0;
}