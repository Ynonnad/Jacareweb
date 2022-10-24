price = float(input()[2:])
c25, c10, c5, c1 = input().split(" ")
c25 = int(c25)
c10 = int(c10)
c5 = int(c5)
c1 = int(c1)

price = price * 100
price = int(price)

some = (c25*25)+(c10*10)+(c5*5)+(c1*1)

pac = some / price
pac = int(pac)

ptotal = price * pac

while(ptotal > 0):
    if (c25 > 0):
        ptotal = ptotal - 25
        c25 = c25 - 1
    elif (c10 > 0):
        ptotal = ptotal - 10
        c10 = c10 - 1
    elif (c5 > 0):
        ptotal = ptotal - 5
        c5 = c5 - 1
    elif (c1 > 0):
        ptotal = ptotal - 1
        c1 = c1 - 1

coins = c25+c10+c5+c1

print(pac)
print(coins)
