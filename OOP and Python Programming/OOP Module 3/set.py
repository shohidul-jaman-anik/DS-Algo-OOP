number =[12,44,66,55,12,44,50,66,80]
unique_number=set(number)
print(number)
print(unique_number)

for unique in unique_number:
    print(unique)

if 12 in unique_number:
    print('12 exists')

A={2,4,6,8}
B={1,4,5,8}
print(A | B)
