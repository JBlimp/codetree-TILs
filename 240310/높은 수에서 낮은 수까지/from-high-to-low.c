#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= b) {
        for (; b >= a; b--) {
            printf("%d ", b);
        }
    } else {
        for (; a >= b; a--) {
            printf("%d ", a);
        }
    }
    
    return 0;
}