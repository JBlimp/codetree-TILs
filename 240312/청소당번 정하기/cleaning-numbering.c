#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    int cnt_class = 0, cnt_hall = 0, cnt_bath = 0;

    for (int i = 1; i < n; i++) {
        if (i % 12 == 0) {
            cnt_bath++;
        } else if (i % 6 == 0 || i % 3 == 0) {
            cnt_hall++;
        } else if (i % 2 == 0) {
            cnt_class++;
        }
    }

    printf("%d %d %d", cnt_class, cnt_hall, cnt_bath);
    return 0;
}