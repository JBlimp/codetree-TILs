#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int input, n;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        sum += input;
    }

    float ave = (float)sum / n;
    printf("%d %.1f", sum, ave);
    return 0;
}