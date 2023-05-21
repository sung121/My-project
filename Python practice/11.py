floor = 10
print(f"{floor}층짜리 크리스마스 트리를 만드세요.")
for i in range(floor):
    for k in range(floor, i,-1):
        print(" ", end="")
    for j in range((i+1)*2-1):
        print("^", end="")
    print()
print(f"{floor}층 짜리 크리스마스 트리가 완성되었습니다.")


