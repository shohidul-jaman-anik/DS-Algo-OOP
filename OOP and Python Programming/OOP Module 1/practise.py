# number = int(input("Enter a number: "))

# if number > 1000:
#     print("You will get honey")
# elif number>=500 & number<=800:
#     print("you will get mobile")
# else:
#     print("you will get nothing")

# =====================

# number = 1

# while number <= 10:
#     number = number+1
#     if number % 2 != 0:
#         continue
#     print(number)

# =====================


# text = "Bangladesh is the best country"

# for i in range(0, len(text), 2):
#     print(text[i])


# =====================

# def oddNumber(numbers):
#     ans = []
#     for number in numbers:

#         if number % 2 != 0:
#             print(number)
#             ans.append(number)

#     return ans


# oddNumber([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])


# =====================

# alph = ("a", "b", "c", "d")
# ralph = reversed(alph)
# for x in ralph:
#   print(x)

# =====================================================

# numbers = [14, 25, 33, 44, 35, 46, 57, 68, 9, 10]


# def filter_even(val):
#     if val % 2 == 0:
#         return True


# filter_object = filter(filter_even, numbers)

# print(list(filter_object))


# =====================================================

# def cube(x):
#     return x * x * x


# numbers = [1, 2, 3, 4, 5]
# newlist = map(cube, numbers)
# print(list(newlist))

# newlist = []
# for num in numbers:
#     newlist.append(cube(num))

# print(newlist)


# =====================================================
from functools import reduce


def func(a, b):
    return a+b


numbers = [1, 2, 3, 4, 5]
result = reduce(func, numbers)
print(result)

# =====================================================
