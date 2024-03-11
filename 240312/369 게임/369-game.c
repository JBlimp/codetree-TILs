#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;
        int has_369 = 0; // 3, 6, 9가 있는지 여부를 나타내는 플래그

        // 숫자의 각 자릿수를 확인하여 3, 6, 9가 있는지 확인
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                has_369 = 1;
                break;
            }
            num /= 10;
        }

        // 3의 배수인 경우 또는 3, 6, 9가 있는 경우 0을 출력
        if (i % 3 == 0 || has_369) {
            printf("0 ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}