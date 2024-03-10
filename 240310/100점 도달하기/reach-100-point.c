#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    for (; n <= 100; n++) {
        if (n < 60) {
            printf("F ");
        } else if (n < 70) {
            printf("D ");
        } else if (n < 80) {
            printf("C ");
        } else if (n < 90) {
            printf("B ");
        } else {
            printf("A ");
        }
    }
    return 0;
}