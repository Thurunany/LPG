n=[]
for i in range(5):
    nota=float(input(f"Digite nota a {i + 1}: "))
    n.append(nota)

maior = max(n)
menor = min(n)
print(f"Maior: {maior}, Menor: {menor}")