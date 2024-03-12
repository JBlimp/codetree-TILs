#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0, i;
    scanf("%d", &n);
    for (i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            break;
        }
    }

    printf("%d", i);
    return 0;
}