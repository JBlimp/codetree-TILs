#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 20 || n >= 30) {
            break;
        }
        cnt++;
        sum += n;
    }

    printf("%.2f", (float)sum/cnt);
    return 0;
}