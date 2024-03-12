#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}