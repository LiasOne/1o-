a = int(input("Δώσε έναν αριθμό: "))

if a in range(0, 10) or range(-9, 0):
    print("Ο αριθμός που έδωσες είναι μονοψήφιος")
elif a in range(10, 100) or range(-99, -9):
    print("Ο αριθμός που έδωσες είναι διψήφιος")
else:
    print("Ο αριθμός που έδωσες έχει πάνω από δύο ψηφία")
