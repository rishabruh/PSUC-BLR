#include <stdio.h>
#include<math.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i<= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // If num is divisible by any number between 2 and sqrt(num), it's not prime
        }
    }
    return 1; // If no divisor is found, num is prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

