#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    if (a >= 80) {
        printf("pass");
    } else {
        printf("%d more score", 80-a);
    }
    return 0;
}