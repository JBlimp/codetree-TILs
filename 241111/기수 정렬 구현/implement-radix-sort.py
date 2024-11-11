def counting_sort(arr, exp):
    n = len(arr)
    output = [0] * n  # 정렬된 결과를 저장할 배열
    count = [0] * 10  # 각 자릿수의 개수를 저장할 배열

    # 자릿수에 해당하는 count 배열 갱신
    for i in range(n):
        index = (arr[i] // exp) % 10
        count[index] += 1

    # count 배열을 업데이트하여 위치를 계산
    for i in range(1, 10):
        count[i] += count[i - 1]

    # output 배열을 채워서 정렬
    for i in range(n - 1, -1, -1):
        index = (arr[i] // exp) % 10
        output[count[index] - 1] = arr[i]
        count[index] -= 1

    # 정렬된 배열을 원래 배열에 복사
    for i in range(n):
        arr[i] = output[i]

def radix_sort(arr):
    # 최대 값의 자릿수 계산
    max_val = max(arr)
    exp = 1  # 자릿수(1의 자리부터 시작)

    # 모든 자릿수에 대해 counting_sort 호출
    while max_val // exp > 0:
        counting_sort(arr, exp)
        exp *= 10  # 다음 자릿수로 이동

    return arr

# 입력 처리
n = int(input().strip())
arr = list(map(int, input().split()))

# 기수 정렬 수행
sorted_arr = radix_sort(arr)

# 결과 출력
print(" ".join(map(str, sorted_arr)))