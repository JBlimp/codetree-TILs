#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum_val = 0;
    scanf("%d", &n);

    for (; n <= 100; n++) {
        sum_val += n;
    }

    printf("%d", sum_val);
    return 0;
}