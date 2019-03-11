#!/usr/bin/python

import math

def findComplement(num):
    n = num
    length = 0
    while(n):
        length += 1
        n = n >> 1
    res = ~num & 2 ** length - 1
    return res

if __name__ == '__main__':
	num = 5
	res = findComplement(num)
	print(res)