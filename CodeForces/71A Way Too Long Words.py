# Words >10 character should be replaced with a letter
# Take in n, which then asks for a word n times

repeat = int(input())
words = []

for loop in range(0, repeat):
    word = input()
    if len(word) > 10:
        words.append(word[:1] + str(len(word)-2) + word[-1])
    else:
        words.append(word)
#end for

for loop in range(0, repeat):
    print(words[loop])
#end for

