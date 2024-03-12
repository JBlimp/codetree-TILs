#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0, cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0 && arr[i] <= 200) {
            sum += arr[i];
            cnt++;
        }
    }

    float ave = (float)sum / cnt;
    printf("%d %.1f", sum, ave);
    return 0;
}