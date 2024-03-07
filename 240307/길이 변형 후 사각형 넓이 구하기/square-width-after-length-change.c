#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int w, h;
    scanf("%d %d", &w, &h);
    w += 8;
    h *= 3;
    printf("%d\n%d\n%d", w, h, w*h);
    return 0;
}