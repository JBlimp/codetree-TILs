#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    //1, 3, 5, 7, 8, 10, 12 -> 31일
    if (n == 2) {
        printf("28");
    } else if ((n <= 7 && n%2 == 1) || (n >= 8 && n%2 == 0)) {
        printf("31");
    } else {
        printf("30");
    }
    return 0;
}