#include <iostream>
using namespace std;

int main() {
    long long int i, n;
    
    do {
        bool isPrime = true;

        cout << "Please enter a number to check for primality or -1 to exit:" << "\n";
        cin >> n;
        
        if (n == -1)
        {
            return 0;
        }
        

        if (n == 0 || n == 1) {
        isPrime = false;
        }
    
        for (i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
              isPrime = false;
              break;
            }
        }

        if (isPrime) {
            cout << n << " is a prime number." << "\n";
        }
        else {
            cout << n << " is not a prime number." << "\n";
        }
    } while (n != -1);
    

    return 0;
}