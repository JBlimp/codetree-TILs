#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val = 0;

    scanf("%d %d", &a, &b);
    for (; a <= b; a++) {
        sum_val += a;
    }

    printf("%d", sum_val);
    return 0;
}