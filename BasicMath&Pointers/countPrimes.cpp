#include <iostream>
#include <cmath>
#include<vector>
using namespace std;
/*
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int n) {
    int c = 0;
    for (int i = 2; i < n; i++) {  // Start from 2 since 0 and 1 are not prime
        if (isPrime(i)) {
            c++;
        }
    }
    return c;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int primeCount = countPrimes(n);
    cout << "Number of primes less than " << n << " is: " << primeCount << endl;

    return 0;
}
*/

//Using Sieve of Eratosthenes time Complexity is less

int countPrimes(int n){
    if(n == 0){
        return 0;
    }
    vector<bool> prime(n, true);
    prime[0] = prime[1] = false;

    int ans = 0;
    for(int i=2; i<n; i++){
        if(prime[i]){
            ans++;

            int j = 2*i;
            while(j<n){
                prime[j] = false;
                j+=i;

            }
        }
        
    }
    return ans;
}
int main() {
   
    cout << "Number of primes is "<< countPrimes(10) << endl;
    return 0;
}