def insertion_sort(arr):
    size = len(arr)
    for i in range(1, size):
        key = arr[i]
        j = i - 1
        # 현재 요소를 올바른 위치에 삽입
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

# 입력 처리
n = int(input().strip())
arr = list(map(int, input().split()))

# 삽입 정렬 수행
sorted_arr = insertion_sort(arr)

# 결과 출력
print(" ".join(map(str, sorted_arr)))