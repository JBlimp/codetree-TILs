#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0;
    float ave;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        sum += a;
    }

    ave = sum / (b - a);

    printf("%.1f", ave);
    return 0;
}