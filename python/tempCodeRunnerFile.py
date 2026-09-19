import datetime

tot = 0
start = datetime.datetime.now()

for i in range(10000001): tot += i

end = datetime.datetime.now()
print("time =", (end - start), tot)