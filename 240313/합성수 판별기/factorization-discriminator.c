#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            printf("C");
            return 0;
        }
    }

    printf("N");
    return 0;
}