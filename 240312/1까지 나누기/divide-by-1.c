#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        n /= i;
        if (n <= 1) {
            break;
        }
    }

    printf("%d", i);
    return 0;
}