#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt = 0;
    int input[100];
    while (true) {
        scanf("%d", &input[cnt]);
        if (input[cnt] == 0) {
            break;
        }
        cnt++;
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d", input[i]);
    }
    return 0;
}