#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    scanf("%d", &year);

    if ((year%4 == 0) && !(year%100 == 0 && year&400 != 0)) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}