#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &b, &a);

    for(; b >= a; b -= 2) {
        printf("%d ", b);
    }
    return 0;
}