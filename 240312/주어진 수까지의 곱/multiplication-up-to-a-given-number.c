#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, prod = 1;
    scanf("%d %d", &a, &b);

    for (; a<=b; a++) {
        prod *= a;
    }

    printf("%d", prod);
    return 0;
}