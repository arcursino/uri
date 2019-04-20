# tags: iniciante, módulo, resto, tempo

total = int(input())

hora = total // (60 * 60)
total = total % (60 * 60)
minuto = total // 60
segundo = total % 60

print('{}:{}:{}'.format(hora, minuto, segundo))
