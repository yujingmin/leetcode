# -*- coding:utf-8 -*-
def findPoisonedDuration(timeSeries, duration):
    if len(timeSeries) == 0:
        return 0
    res = 0
    for i in range(len(timeSeries)-1):
        if timeSeries[i] + duration < timeSeries[i+1]:
            res += duration
        else:
            res += timeSeries[i+1] - timeSeries[i]
    res += duration
    return res

if __name__ == '__main__':
	a = [1,4]
	res = findPoisonedDuration(a,2)
	print(res)