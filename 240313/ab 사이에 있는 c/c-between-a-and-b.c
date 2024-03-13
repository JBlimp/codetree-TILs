#include <stdio.h>

int main() {
    int a, b, c;
    int found = 0; 
    scanf("%d %d %d", &a, &b, &c);

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}