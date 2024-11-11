def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # 한 번 순회할 때마다 마지막 i개의 요소는 이미 정렬된 상태임
        for j in range(n - 1 - i):
            if arr[j] > arr[j + 1]:
                # 인접한 두 원소를 교환
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

# 입력 처리
n = int(input().strip())
arr = list(map(int, input().split()))

# 버블 정렬 수행
sorted_arr = bubble_sort(arr)

# 결과 출력
print(" ".join(map(str, sorted_arr)))