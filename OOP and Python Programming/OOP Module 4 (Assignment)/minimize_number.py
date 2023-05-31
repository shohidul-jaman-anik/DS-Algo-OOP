

# Taking input from the user
N = int(input())
numbers = list(map(int, input().split()))

# Counting the maximum number of operations
max_operations = float('inf')
all_even = all(num % 2 == 0 for num in numbers)

if all_even:
    for num in numbers:
        count = 0
        while num % 2 == 0:
            num //= 2
            count += 1
        max_operations = min(max_operations, count)

# Printing the result
if all_even:
    print(max_operations)
else:
    print(0)

