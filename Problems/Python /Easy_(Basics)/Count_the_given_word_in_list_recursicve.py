def count(L,word):
    if len(L)==0:
        return 0
    elif L[0]==word:
        return 1+count(L[1:],word)
    else:
        return count(L[1:],word)
L=['abc', 'def', 'abcde', 'abc', 'def', 'abc', 'def', 'ghi', 'abc']
word=input("Enter ")
print(count(L,word))
