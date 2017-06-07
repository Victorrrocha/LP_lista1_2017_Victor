n = int(input())
total = 0
for i in range(1,n+1):
    resultado = (2*i -1)**(2*i -1)/(2*i)**(2*i)
    if(i%2 == 0 or i == 1):
        total = resultado + total
    else:
        total = resultado * total

print(total)
