#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int flag = 0;
        int num = i;
        while (num != 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                printf("0 ");
                flag = 1;
                break;
            }
            num /= 10;
        }
        if (flag == 0 && i % 3 != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}