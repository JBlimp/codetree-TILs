#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int* input = (int*)malloc(sizeof(int)*n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < n; i++) {
        if (input[i]%3 == 0 && input[i]%2 == 1) {
            printf("%d\n", input[i]);
        }
    }

    free(input);
    return 0;
}