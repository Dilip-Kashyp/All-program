def romantoint(s):
    dic = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
    re = 0
    for i in range(len(s)):
        if i+1 <=0 and dic[s[i]] > dic[s[i+1]]:
            re -=dic[s[i]]

        else:
            re +=dic[s[i]] 


    return re





s = "III"
print(romantoint(s))