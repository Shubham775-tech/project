import string
import random

if __name__ == '__main__':
   # s1 = string.ascii_letters
   # print(s1)
    s2 =  string.ascii_lowercase

    s3 = string.ascii_uppercase

    s4 = string.digits
    
    s5 = string.punctuation

    plen = int(input("Enter password length:"))
    s = []

    s.extend(list(s2))
    s.extend(list(s3))
    s.extend(list(s4))
    s.extend(list(s5))
    #print(s)

    random.shuffle(s)
    #print(s)
    print("Your Password is :")

    print("".join(s[0:plen]))


    
