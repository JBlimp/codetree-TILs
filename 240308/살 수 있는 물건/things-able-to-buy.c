#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    if (a >= 3000) {
        printf("book");
    } else if ( a >= 1000) {
        printf("mask");
    } else {
        printf("no");
    }
    return 0;
}