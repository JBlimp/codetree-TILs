#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a_age, b_age;
    char a_gender, b_gender;
    scanf("%d %c %d %c", &a_age, &a_gender, &b_age, &b_gender);

    if ((a_age >= 19 && a_gender == 'M') || (b_age >= 19) && b_gender == 'M') {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}