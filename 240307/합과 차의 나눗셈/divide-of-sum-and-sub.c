#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);
    float c = (float)(a + b) / (float)(a - b);
    printf("%.2f", c);
    return 0;
}