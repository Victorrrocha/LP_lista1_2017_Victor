entrada = "questao_3.txt"
lista = []
with open(entrada, 'r', encoding = 'utf-8') as arquivo:
    for linha in arquivo:
        lista.append(linha.strip())
    lista.sort()
    print(lista[0]+", "+lista[1])
