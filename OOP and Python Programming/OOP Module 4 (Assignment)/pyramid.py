# import pyautogui

# def draw_pyramid(rows):
#     pyramid = ''
#     for i in range(rows):
#         num_spaces = rows - i - 1
#         num_asterisks = 2 * i + 1
#         line = ' ' * num_spaces + '*' * num_asterisks
#         pyramid += line + '\n'
    
#     pyautogui.typewrite(pyramid)

# # Taking input from the user
# num_rows = int(input("Enter the number of rows for the pyramid: "))

# # Drawing the pyramid
# draw_pyramid(num_rows)

# def draw_right_angle(rows):
#     for i in range(1, rows ):  
#         for j in range(i):
#             print("*", end="")
#         print()  


# num_rows = int(input("Enter the number of rows for the right-angle: "))

# draw_right_angle(num_rows+ 1)


import pyautogui

def draw_right_triangle_pyramid(rows):
    pyramid = ''
    for i in range(rows):
        for j in range(i + 1):
            pyramid += '#'
        pyramid += '\n'
    
    pyautogui.typewrite(pyramid)


num_rows = int(input("Enter the number of right triangle pyramid: "))

draw_right_triangle_pyramid(num_rows)
