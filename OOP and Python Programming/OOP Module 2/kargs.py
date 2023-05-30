# def full_name(first,last):
#     name=f"{first} {last}"
#     return name
# name=full_name(last="Mondol",first="Ranu")
# print(name)


def person(name,title,**job,):
    name=f"{name} {title}  {job}"
    for key,value in job.items():
        print(key,value)

name=person(name="Bilkis Begum",title="A human Being",gender="femel",job="Beautisian")
print(name)


def calculation(num1,num2):
    sum=num1+num2
    mul=num1*num2
    devide=num1 / num2
    return sum, mul, devide

result=calculation(10,20)
print(result)