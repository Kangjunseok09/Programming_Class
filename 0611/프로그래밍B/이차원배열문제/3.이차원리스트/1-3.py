Scores = [[92, 80, 87], [94, 82, 86], [74, 65, 69], [87, 89, 81]]

m_total = 0
for row in Scores:
  s_total = 0
  for col in row:
    s_total = s_total + col
  print("{:.2f}".format(s_total / len(row)))