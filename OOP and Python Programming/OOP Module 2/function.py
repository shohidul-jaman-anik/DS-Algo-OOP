def double_it(num):
    result=num*2
    print(result)

double_it(5)

# def sum_result(res1,res2,res3=80):
#     ans=res1+res2+res3
#     return ans
# result=sum_result(50,60)
# print(result)

def sum_all(num1,num2,*num):
    print(num)
    for n in num:
        print(n)
   
result=sum_all(50,60,30,90,40)
print(result)