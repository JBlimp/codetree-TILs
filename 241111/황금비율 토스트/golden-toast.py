import sys
from collections import deque

# 입력 속도를 높이기 위해 sys.stdin.readline 사용
input = sys.stdin.readline

# 입력 처리
n, m = map(int, input().split())
bread = deque(input().strip())
commands = [input().strip() for _ in range(m)]

# 초기 가리키는 위치는 맨 마지막
pointer = len(bread)

for command in commands:
    if command == 'L':
        # 가리키는 위치를 왼쪽으로 한 칸 이동
        if pointer > 0:
            pointer -= 1
    elif command == 'R':
        # 가리키는 위치를 오른쪽으로 한 칸 이동
        if pointer < len(bread):
            pointer += 1
    elif command == 'D':
        # 가리키는 위치 바로 뒤의 빵 제거
        if pointer < len(bread):
            bread.remove(bread[pointer])
    elif command.startswith('P '):
        # 'P &'는 가리키는 위치에 문자 추가
        _, char = command.split()
        bread.insert(pointer, char)
        pointer += 1

# 최종 결과 출력
print(''.join(bread))