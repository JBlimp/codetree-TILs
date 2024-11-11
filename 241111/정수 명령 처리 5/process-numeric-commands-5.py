import sys

# 입력 속도를 빠르게 하기 위해 sys.stdin 사용
input = sys.stdin.readline

# 동적 배열로 사용할 리스트
dynamic_array = []

# 명령 수 입력
N = int(input().strip())

# 명령어 처리
for _ in range(N):
    command = input().strip().split()
    
    if command[0] == "push_back":
        # push_back A: A를 배열의 맨 뒤에 추가
        dynamic_array.append(int(command[1]))
    elif command[0] == "pop_back":
        # pop_back: 배열의 맨 뒤 요소 삭제
        if dynamic_array:
            dynamic_array.pop()
    elif command[0] == "size":
        # size: 배열의 크기 출력
        print(len(dynamic_array))
    elif command[0] == "get":
        # get k: k번째 요소 출력 (1-indexed)
        k = int(command[1])
        if 1 <= k <= len(dynamic_array):
            print(dynamic_array[k - 1])