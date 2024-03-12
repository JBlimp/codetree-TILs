#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n%4 == 0) {
            cnt++;
            if (n%100 == 0 && n%400 != 0) {
                cnt--;
            }
        }
    }

    printf("%d", cnt);

    return 0;
}