numbers=[14,55,66,35,83,45,35,62,73]

odds=[]

for num in  numbers:
    if num%2==1 and num%5==0:
        odds.append(num)

print(odds)

odd_numbs=[num  for num in numbers if num%2 ==1  if num%5==0 ]
print(odd_numbs)

players=["sakib","tamim","mustafiz"]
ages=[38,35,32]

player_comb=[]
for player in players:
  
    for age in ages:
        player_comb.append([player,age])

print(player_comb)

player_comb2=[(player,age) for player in players for age in ages] 
print(player_comb2)
