# -*- coding:utf-8 -*_

def nthUglyNumber(n):
    ugly = [1]
    ind2 = 0
    ind3 = 0
    ind5 = 0
    for i in range(1,n):
        a = ugly[ind2] * 2
        b = ugly[ind3] * 3
        c = ugly[ind5] * 5
        ugly.append(min(a,b,c))
        if ugly[i] == a:
            ind2 += 1
        if ugly[i] == b:
            ind3 += 1
        if ugly[i] == c:
            ind5 += 1
    return ugly[-1]

 if __name__ == '__main__':
 	tmp = nthUglyNumber(10)
 	print(tmp)