#include <iostream>
#include <limits>
using namespace std;

void getTwoValues(int &, int &);
bool isPrime(int);
int getNextPrime(int);
int getPrevPrime(int);

void getTwoValues(int &begin, int &end){
    while(true){
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin < end){
            break;
        }
        else {
            cout << "Invalid input. Please make sure first input is less than the second input." << endl;
        }
    }
}
bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for (int i = 2; i * i <+ num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int getNextPrime(int begin){
    int next = begin + 1;
    while (!isPrime(next)){
        next++;
    }
    return next;
}
int getPrevPrime(int end){
    int prev = end - 1;
    while (prev > 1 && !isPrime(prev)){
        prev--;
    }
    return prev;
}
