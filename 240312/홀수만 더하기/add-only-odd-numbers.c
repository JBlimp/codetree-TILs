#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input, sum_val = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        if (input % 2 == 1 && input & 3 == 0) {
            sum_val += input;
        }
    }

    printf("%d", sum_val);
    return 0;
}