class Shopping:
    def __init__(self,name) :
        self.name=name
        self.cart=[]

    def add_to_cart(self,item,price,quantity):
        product={"item":item,"price":price,"quantity":quantity}
        self.cart.append(product)

    def checkout(self,amount):
        total=0
        for item in self.cart:
            total+=item['price'] * item['quantity']
        print(total)
        if amount< total:
            print(f'Please provede {total-amount} more')
        else:
            extra = amount - total
            print(f"Here is your items and extra money {extra} tk.")

shwapon=Shopping("Alen Shwapon")
shwapon.add_to_cart("Alu",50,6)
shwapon.add_to_cart("Dim",40,24)
shwapon.add_to_cart("Rice",10,60)

shwapon.checkout(2000)

print(shwapon.cart)
        