#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0;
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (; a <= b; a++) {
            if (a % 5 == 0) {
                sum += a;
            }
        }
    } else {
        for (; b <= a; b++) {
            if (b % 5 == 0) {
                sum += b;
            }
        }
    }

    printf("%d", sum);
    return 0;
}