#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    long long a, b;
    scanf("%lld %lldd", &a, &b);

    printf("%lld.", a/b);

    long long remainder = a%b;
    for(int i = 0; i < 20; i++) {
        remainder *= 10;
        printf("%lld", remainder / b);
        remainder %= b;
    }
    
    return 0;
}