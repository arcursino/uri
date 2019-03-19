total = int(input())

ano = int(total / 365)
anos = 365 * ano
meses = total - (365 * ano)
mes = int(meses / 30)
dias = 30 * mes
dia = total - anos - dias

print('{} ano(s)\n{} mes(es)\n{} dia(s)'.format(ano, mes, dia))
