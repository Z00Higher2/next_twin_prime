# Write a program numbers.cpp that defines a function
# nextPrime(n)
# If n is divisible by d, the function should return true, otherwise return false.
# then print out the whether the number is twin prime or not
# then prints out the next twin prime number


def isPrime(n):
    if n <= 1:
        return True
 
    for i in range (2 , n):
        if (n % i == 0):
            return False
 
    return True

def isTwinPrime(n):

    while isPrime(n):
        if (isPrime(n - 2) or isPrime(n + 2)):
            return True
        
        elif (not isPrime(n-2) and isPrime(n + 2)):
            return False
        
        elif (not isPrime(n)):
              return False
        
        else:
            return True
        
    return False

def nextTwinPrime(n):
        if (isPrime(n)):
            if (n > 2):
                count = 1
                while (not isTwinPrime(n + count)):
                        count+=1
                        if (isTwinPrime(n + count)):
                            return n + count
                            break   
            elif (n <= 2):
                count = 0
                while (not isTwinPrime(n + count)):      
                        count+=1 
                        if (isTwinPrime(n + count)):
                            return n + count
                            break
       
        elif (not isPrime(n)):
            count = 0
            while (not isTwinPrime(n + count)):
                count+=1

                if (isTwinPrime(n + count)):
                    return n + count
                    break

        return nextTwinPrime(n)


def main():

    num_1 = int(input("Enter the first number: "))

    print(nextTwinPrime(num_1))

main()