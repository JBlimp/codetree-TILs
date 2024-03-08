#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w;
    scanf("%d %d", &h, &w);
    int bmi = w / (h * h);
    printf("%d\n", bmi);
    if (bmi >= 25) {
        printf("Obesity");
    }
    return 0;
}