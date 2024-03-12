#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int input;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        if (input % 2 == 1) {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}