#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    for (; a <= b; a++) {
        if (a % 2 == 0) {
            sum += a;
        }
    }

    printf("%d", sum);
    return 0;
}