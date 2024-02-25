// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 5F
// Add a function
// int nextTwinPrime(int n);
// that returns the smallest twin prime greater than n. Change the main function to test the new code.

#include <iostream>
using namespace std;


bool isPrime(int n){
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;

}


bool isTwinPrime(int n){
    
    while(isPrime(n)){ // check from the function isPrime

        if (isPrime(n - 2) || isPrime(n + 2)){
            return true; // returns true

        } else if (!isPrime(n + 2) && !isPrime(n - 2)){
            return false; // return false

        } else if (!isPrime(n)){
            return false; // return false

        } else {
            return true; // return true
        }

    }

    return false; // returns false
}


int nextTwinPrime(int n){
    if (isPrime(n)){
        if (n > 2){
            int count = 1;
            while (!isTwinPrime(n + count)){        
            count++; // add to the count

        if (isTwinPrime(n + count)){
            return n + count; // return n + count
            break; // break out of loop
        }

        }} else if (n <= 2){
            int count = 0;
            while (!isTwinPrime(n + count)){        
            count++; // add to the count

        if (isTwinPrime(n + count)){
            return n + count; // return n + count
            break; // break out of loop
        }
        }
        
    }   
    } else if (!isPrime(n)) {
        int count = 0;
        while (!isTwinPrime(n + count)){        
        count++; // add to the count

        if (isTwinPrime(n + count)){
            return n + count; // return n + count
            break; // break out of loop
        }
    }   
}

    return nextTwinPrime(n); // returns nextTwinPrime function

}


int main() {

    int num_1;

    cout << "Enter the first number: ";
    cin >> num_1;

    cout << nextTwinPrime(num_1) << endl;

    return 0;

}