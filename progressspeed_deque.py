def solution(progresses, speeds):
    print(progresses)
    print(speeds)
    answer = []
    time = 0
    count = 0
    while len(progresses)> 0:
        if (progresses[0] + time*speeds[0]) >= 100:
            progresses.pop(0)
            speeds.pop(0)
            count += 1
        else:
            if count > 0:
                answer.append(count)
                count = 0
            time += 1
    answer.append(count)
    return answer


''' deque
from collections import deque

def solution(progresses, speeds):
    deq_p = deque(progresses)
    deq_s = deque(speeds)
    answer = [] 
    while(len(deq_p) > 0):
        count = 0
        for i in range(len(deq_p)):
            speed = deq_s.popleft()
            deq_p.append(deq_p.popleft()+speed)
            deq_s.append(speed)
        for i in range(len(deq_p)):
            if(deq_p[0] >= 100):
                deq_p.popleft()
                deq_s.popleft()
                count += 1
        if count > 0:
            answer.append(count)
    return answer
    '''