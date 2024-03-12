#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_3 = 0, cnt_5 = 0;
    int input;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &input);
        if (input%3 == 0) {
            cnt_3++;
        }

        if (input%5 == 0) {
            cnt_5++;
        }
    }

    printf("%d %d", cnt_3, cnt_5);
    return 0;
}