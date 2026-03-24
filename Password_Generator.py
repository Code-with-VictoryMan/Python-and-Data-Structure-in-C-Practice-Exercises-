import random as rs

letters=['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' , 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y']
numbers=['0','1','2','3','4','5','6','7','8','9']
special=['!','@','#','$','%','^','&','*','(',')','?','+','=']


letter_char=int(input("How many letter characters you want: "))

num_char=int(input("How many Number characters you want: "))

special_char=int(input("How many Special characters you want: "))

password=[]
for i in range(1,letter_char+1):
    char=rs.choice(letters)
    password+=char

for i in range(1,num_char+1):
    char=rs.choice(numbers)    
    password+=char

for i in range(1,special_char+1):
    char=rs.choice(special)
    password+=char

rs.shuffle(password)

# print(password)    

password_str = ""

for char in password:
    password_str += char

print(password_str)


    



