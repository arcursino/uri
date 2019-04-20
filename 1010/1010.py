# tags: iniciante, separação de string, separa string

a, b, c = input().split()
a, b, c = int(a), int(b), float(c)

d, e, f = input().split()
d, e, f = int(d), int(e), float(f)

pagar = (b * c) + (e * f)

print('VALOR A PAGAR: R$ {:.2f}'.format(pagar))
