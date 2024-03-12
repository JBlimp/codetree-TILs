#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i, proc = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        proc *= i;
        if (proc >= n) {
            break;
        }
    }

    printf("%d", i);
    return 0;
}