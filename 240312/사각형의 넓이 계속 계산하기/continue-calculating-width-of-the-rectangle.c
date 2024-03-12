#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int input[100];
    int a, b, cnt = 0;
    char c;
    while (1) {
        scanf("%d %d %c", &a, &b, &c);
        input[cnt] = a * b;
        cnt++;
        if (c == "C") {
            break;
        }
    }

    for (int i = 0; i < cnt; i++) {
        printf("%d\n", input[i]);
    }
    return 0;
}