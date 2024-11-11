def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        # 현재 위치에서 가장 작은 값을 찾음
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        # 최소값을 현재 위치로 교환
        arr[i], arr[min_index] = arr[min_index], arr[i]
    return arr

# 입력 처리
n = int(input().strip())
arr = list(map(int, input().split()))

# 선택 정렬 수행
sorted_arr = selection_sort(arr)

# 결과 출력
print(" ".join(map(str, sorted_arr)))