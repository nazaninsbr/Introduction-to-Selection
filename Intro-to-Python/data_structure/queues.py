from collections import deque
queue = deque(["nazanin", "parisa", "nima"])
queue.append("neda")
print(queue)
print(queue.popleft())
print(queue.popleft())
