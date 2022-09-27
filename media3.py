n=[]
for i in range(3):
    nota=float(input(f"Digite nota a {i + 1}: "))
    n.append(nota)

media = sum(n)/len(n)
print(f"Media = {media:10.2f}")