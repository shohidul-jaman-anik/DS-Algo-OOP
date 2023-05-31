# Taking input from the user
N = int(input())
sequence = list(map(int, input().split()))

# Counting the occurrences of each element
occurrences = [0] * (N + 1)
for num in sequence:
    occurrences[num] += 1

# Finding the minimum number of elements to be removed
removals = 0
for i in range(1, N + 1):
    if occurrences[i] > i:
        removals += occurrences[i] - i

# Printing the result
print(removals)


