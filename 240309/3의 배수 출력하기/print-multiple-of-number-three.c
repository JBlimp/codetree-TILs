#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int i = 3;
    while(i <= n) {
        printf("%d ", i);
        i += 3;
    }
    return 0;
}