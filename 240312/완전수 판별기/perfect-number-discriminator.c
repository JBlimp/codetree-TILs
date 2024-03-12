#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= (n/2); i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (n == sum) {
        printf("P");
    } else {
        printf("N");
    }
    return 0;
}