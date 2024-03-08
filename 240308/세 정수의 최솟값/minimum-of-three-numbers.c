#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    int low;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        low = a;
    } else if (b <= a && b <= c) {
        low = b;
    } else {
        low = c;
    }

    printf("%d", low);
    return 0;
}