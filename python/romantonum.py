

RomanNum = {
    "I": 1,
    "V": 5,
    "X" :  10,
    "L" : 50,
    "C" :100,
    "D" : 500,
    "M" : 1000,
}

def FindRomanNum(s : str):
    sum = 0
    if(len(s) == 2):
        if(RomanNum[s[0]] < RomanNum(s[1])):
            sum += s[1]-s[0]
        
    return sum

    
    


FindRomanNum("IV")