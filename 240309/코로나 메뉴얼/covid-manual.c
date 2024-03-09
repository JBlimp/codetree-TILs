#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[3];
    char b[3];
    scanf("%c %d %c %d %c %d", &b[0], &a[0], &b[1], &a[1], &b[2], &a[2]);

    int temp = 0;
    for (int i = 0; i <= 2; i++) {
        if (a[i] >= 37 && b[i] == 'Y') {
            temp += 1;
        }
    }

    if (temp >= 2) {
        printf("E");
    } else {
        printf("N");
    }
    return 0;
}