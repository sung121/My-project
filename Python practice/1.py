floor = int(input("원하는 숫자를 정해라"))
for i in range(floor):
    for k in range(floor, i,-1):
        print("■", end="")
    for j in range((i+1)*2-1):
        print("^", end="")
    print()

