#include <stdio.h>

int main() {
    int n = 1234, rev = 0, r;
    while(n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }
    printf("Reversed number is %d\\n", rev);
    return 0;
}

