# movies ticket show
#age     cost
#1 to 3: (Free)
#3 to 10:(150)
#10 to 60:(250)
#above 60:(200)
user_input=input("Please enter your age:\n")
user_age=int(user_input)
if user_age==0 or user_age<0:
    print("Sorry...!!! YOU CAN'T WATCH MOVIES")
elif 1<user_age<=3:
    print("Ticket Price:Free")
elif 3<user_age<=10:
    print("Ticket Price:150")
elif 10<user_age<=60:
    print("Ticket Price:250")
else:
    print("Ticket Price:200")