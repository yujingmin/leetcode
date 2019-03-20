# -*-coding:utf-8 -*-

import os

def repeatedNTimes(A):
    A.sort()
    N = len(A) // 2
    if A[N] == A[N - 1]:
        return A[N]
    if A[0] == A[N - 1]:
        return A[N - 1]
    if A[-1] == A[N]:
        return A[N]

if __name__ == '__main__':
	A = [1,6,4,8,8,8]
	repeatedNTimes(A)