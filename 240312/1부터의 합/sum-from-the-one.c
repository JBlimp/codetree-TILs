#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= 100; i++) {
        if (sum + i >= n) {
            break;
        }
        sum += i;
    }

    printf("%d", sum);
    return 0;
}