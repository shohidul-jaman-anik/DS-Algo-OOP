# def double(x):
#     return x*2

# double=lambda x:x*2

# result=double(12)
# print(result)

# sum_num=lambda x,y: x+y

# total=sum_num(12,24)
# print(total)

# numbers=[21,32,45,65,78]
# double_nums=map(lambda x: x*2,numbers)

actors=[
    {"name":"Sabana","age":55},
    {"name":"bubli","age":28},
    {"name":"Mehzabin","age":29},
    {"name":"Purnima","age":49},

]
junior=filter(lambda actor:actor["age"]<40,actors)
print(list(junior))



# def double_it(x):
#     return x*2

# result=[]
# numbers=[2,4,3,5,2]

# for num in  numbers:
#     result.append(double_it(num))

# print(result)

def double_it(x):
    return x*x

numbers=[2,4,3,5,2]
result=list(map(double_it,numbers))
print(result)