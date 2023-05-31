
s = input()


balanced_strings = []
count = 0
current_string = ""


for char in s:

    current_string += char

    if current_string.count('L') == current_string.count('R'):
        balanced_strings.append(current_string)
        current_string = ""
        count += 1


print(count)
for balanced_string in balanced_strings:
    print(balanced_string)



N = int(input())
numbers = list(map(int, input().split()))


max_operations = float('inf')
all_even = all(num % 2 == 0 for num in numbers)

if all_even:
    for num in numbers:
        count = 0
        while num % 2 == 0:
            num //= 2
            count += 1
        max_operations = min(max_operations, count)


if all_even:
    print(max_operations)
else:
    print(0)
