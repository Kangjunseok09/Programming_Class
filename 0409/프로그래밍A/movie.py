title = input("영화제목: ")
price = input("티켓가격: ")
f1 = open("0409/프로그래밍A/movie.txt", 'w')
f1.write(title +"\n")
f1.write(price)
f1.close()

f2 = open("0409/프로그래밍A/movie.txt", "r")
movie = f2.readline()
ticket = f2.readline()
f2.close()
print("영화 제목:", movie,"티켓 가격:", ticket, sep='')

