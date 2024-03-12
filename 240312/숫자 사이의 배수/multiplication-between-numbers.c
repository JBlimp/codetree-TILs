#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum = 0, cnt = 0;
    float ave;
    scanf("%d %d", &a, &b);

    for (; a <= b; a++) {
        if (a % 5 == 0 || a % 7 == 0) {
            cnt += 1;
            sum += a;
        }
    }

    ave = (float)sum / cnt;

    printf("%d %.1f",sum, ave);
    return 0;
}