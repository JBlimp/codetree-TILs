#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x = 0;
    scanf("%d", &n);

    while (n != 1) {
        n /= 2;
        x++;
    }

    printf("%d", x);
    return 0;
}