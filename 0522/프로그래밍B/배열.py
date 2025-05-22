# planet = ["수성", "금성", "지구", "화성", "목성", "토성", "천왕성", "해왕성"]
# for i in range(8):
#     print(planet[i])

planetScale = [2440, 6052, 6378, 3390, 69911, 58232, 25362, 24622]
maxScale = planetScale[0]
for i in range(1, 8):
    if maxScale < planetScale[i]:
        maxScale = planetScale[i]
print(maxScale)