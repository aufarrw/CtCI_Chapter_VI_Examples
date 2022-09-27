import math

def foo(array):
    sum = 0
    product = 1
    i = 0
    while (i < len(array)):
        sum += array[i]
        i += 1
    i = 0
    while (i < len(array)):
        product *= array[i]
        i += 1
    print(str(sum) + ", " + str(product))

def pairs(array):
    i = 0
    while (i < len(array)):
        j = 0
        while (j < len(array)):
            print(str(array[i]) + ", " + str(array[j]))
            j += 1
        i += 1

def unordPairs(array) :
    i = 0
    while (i < len(array)) :
        j = i + 1
        while (j < len(array)) :
            print(str(array[i]) + "," + str(array[j]))
            j += 1
        i += 1

def unordPairs2arr(arrayA, arrayB):
    i = 0
    while (i < len(arrayA)):
        j = 0
        while (j < len(arrayB)):
            print(str(arrayA[i]) + "," + str(arrayB[j]))
            j += 1
        i += 1

def unordPairs2arrmul(arrayA, arrayB):
    i = 0
    while (i < len(arrayA)):
        j = 0
        while (j < len(arrayB)):
            k = 0
            while (k < 100000):
                print(str(arrayA[i]) + "," + str(arrayB[j]))
                k += 1
            j += 1
        i += 1

def reverse(array):
    i = 0
    while (i < int(len(array) / 2)):
        other = len(array) - i - 1
        temp = array[i]
        array[i] = array[other]
        array[other] = temp
        i += 1
        print(temp)

def rever(array):
    i = len(array) - 1
    while (i >= 0):
        print(str(array[i]) + " ")
        i -= 1

def Prime(n):
    x = 2
    while (x <= math.sqrt(n)):
        if (n % x == 0):
            print(str(n) + " is NOT prime")
            return False
        x += 1
    print(str(n) + " is prime")
    return True

def fact(n):
    fac = 1
    i = 1
    while (i <= n):
        fac *= i
        i += 1
    print(fac)
    return fac

def allpermutation(str):
    permutation(str, "")

def permutation(str, prefix):
    if (len(str) == 0):
        print(prefix)
    else:
        i = 0
        while (i < len(str)):
            rem = str[0:i] + str[i + 1:]
            permutation(rem, prefix + str[i])
            i += 1

def allFib(n):
    i = 0
    while (i < n):
        print(str(i) + ": " + str(fib(i)))
        i += 1

def fib(n):
    if (n <= 0):
        return 0
    elif (n == 1):
        return 1
    return fib(n - 1) + fib(n - 2)

def allfibonacci(n):
    memo = [0] * (n + 1)
    i = 0
    while (i < n):
        print(str(i) + ": " + str(fibonacci(i, memo)))
        i += 1

def fibonacci(n, memo):
    if (n <= 0):
        return 0
    elif (n == 1):
        return 1
    elif (memo[n] > 0):
        return memo[n]
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo)
    return memo[n]

def powersOf2(n):
    if (n < 1):
        return 0
    elif (n == 1):
        print(1)
        return 1
    else:
        prev = powersOf2(int(n / 2))
        curr = prev * 2
        print(curr)
        return curr

array = [1,2,3,4,5,6,7,8]
arrayA = [1, 2, 3, 4]
arrayB = [2, 3, 4, 5]
n = 7
world = "WORLD"

# foo(array)
# pairs(array)
# unordPairs(array)
# unordPairs2arr(arrayA, arrayB)
# unordPairs2arrmul(arrayA, arrayB)
# reverse(array)
# rever(array)
Prime(n)
# fact(n)
# allpermutation(world)
# allFib(n)
# allfibonacci(n)
# powersOf2(n)