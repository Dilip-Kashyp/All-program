def Longest_Common_Prefix(strs):
    st = ''
    for i in range(len(strs[0])):
        for j in strs:
            if i==len(j) or j[i]!=strs[0][i]:
                return st

        st +=strs[0][i]
    return st  
    











strs = ["flower","flow","flight"]
print(Longest_Common_Prefix(strs))