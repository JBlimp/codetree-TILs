#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {}
    if (n%3 == 0 || (n/10)&3 == 0 || (n-(n/10)*10)%3 == 0) {
        printf("0 ");
    } else {
        printf("%d ", i);
    }
}
    return 0;
}