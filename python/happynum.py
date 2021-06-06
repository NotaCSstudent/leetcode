def HappyNum(n:int)-> bool:
    timer = 15
    while(n>1 and timer >1):
        sum = 0
        t = str(n)
        for i in range(len(t)):
            sum += int(t[i])**2
        n = sum
        timer -=1
    print(n)
    if(n==1):
        return True
    else:
        return False

    
print(HappyNum(2))