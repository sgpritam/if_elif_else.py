winning_number=8
num=input("Enter the number between 1to 9:\n")
num=int(num)
if num==winning_number:
    print("Exactly right")
else:
    if num < winning_number:
        print("too low")
    else:
        print("too high")