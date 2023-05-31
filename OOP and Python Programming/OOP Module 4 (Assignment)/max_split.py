# # Taking input from the user
# s = input()

# # Initializing variables
# balanced_strings = []
# count = 0
# current_string = ""

# # Iterating through the input string
# for char in s:
#     current_string += char

#     # Checking if the current substring is balanced
#     if current_string.count('L') == current_string.count('R'):
#         balanced_strings.append(current_string)
#         current_string = ""
#         count += 1

# # Printing the result
# print(count)
# for balanced_string in balanced_strings:
#     print(balanced_string)





# Taking input from the user
s = input()

# Initializing variables
balanced_strings = []
count = 0
current_string = ""

# Iterating through the input string
for char in s:
    # Building the current substring
    current_string += char

    # Checking if the current substring is balanced
    if current_string.count('L') == current_string.count('R'):
        # If balanced, add it to the list of balanced strings
        balanced_strings.append(current_string)
        # Reset the current substring
        current_string = ""
        # Increment the count of balanced strings
        count += 1

# Printing the result
print(count)
for balanced_string in balanced_strings:
    print(balanced_string)
