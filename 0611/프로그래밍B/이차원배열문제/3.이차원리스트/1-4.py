Scores = [['김정호', 92, 80, 87], ['박문수', 94, 82, 86], ['이사부',74, 65, 69], ['장영실',87, 89, 81]]
for row in Scores:
  avg = 0
  for col in range(1, len(row)):
    avg += row[col]
  print(("{:} {:.2f}".format(row[0], avg/3)))