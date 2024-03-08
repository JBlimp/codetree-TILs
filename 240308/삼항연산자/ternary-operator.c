#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d", &a);
    int grade = a == 100 ? 0 : 1;
    if (grade == 0) {
        printf("pass");
    } else {
        printf("failure");
    }
    return 0;
}