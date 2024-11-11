#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 100

// 동적 배열 구조체 정의
typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

// 동적 배열 초기화 함수
DynamicArray* create_array() {
    DynamicArray *arr = (DynamicArray *)malloc(sizeof(DynamicArray));
    arr->data = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
    arr->size = 0;
    arr->capacity = INITIAL_CAPACITY;
    return arr;
}

// 동적 배열의 크기 확장 함수
void expand_array(DynamicArray *arr) {
    arr->capacity *= 2;
    arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
}

// push_back 함수
void push_back(DynamicArray *arr, int value) {
    if (arr->size == arr->capacity) {
        expand_array(arr);
    }
    arr->data[arr->size++] = value;
}

// pop_back 함수
void pop_back(DynamicArray *arr) {
    if (arr->size > 0) {
        arr->size--;
    }
}

// size 함수
int get_size(DynamicArray *arr) {
    return arr->size;
}

// get 함수
int get_element(DynamicArray *arr, int index) {
    if (index >= 1 && index <= arr->size) {
        return arr->data[index - 1];
    }
    return -1; // 에러 값, 호출할 수 없는 경우 (문제에서는 항상 가능한 입력만 주어진다고 했으므로 실제로는 필요하지 않음)
}

// 메모리 해제 함수
void free_array(DynamicArray *arr) {
    free(arr->data);
    free(arr);
}

int main() {
    int N;
    scanf("%d", &N);
    DynamicArray *arr = create_array();

    for (int i = 0; i < N; i++) {
        char command[15];
        scanf("%s", command);

        if (strcmp(command, "push_back") == 0) {
            int value;
            scanf("%d", &value);
            push_back(arr, value);
        } else if (strcmp(command, "pop_back") == 0) {
            pop_back(arr);
        } else if (strcmp(command, "size") == 0) {
            printf("%d\n", get_size(arr));
        } else if (strcmp(command, "get") == 0) {
            int k;
            scanf("%d", &k);
            printf("%d\n", get_element(arr, k));
        }
    }

    free_array(arr);
    return 0;
}