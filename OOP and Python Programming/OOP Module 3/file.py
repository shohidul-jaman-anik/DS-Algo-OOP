# with open("message","w") as file:
#     file.write('I Love Python and JavaScript.')


with open("message.txt","a") as file:
    file.write('I Love Python and JavaScript.')

with open("message.txt","r") as file:
    text=file.read()
    print(text)


