class Shop:
  
    def  __init__(self,buyer) -> None:
        self.buyer=buyer
        self.cart=[] # cart is an instance attribute


    def add_to_cart(self,item):
        self.cart.append(item)

mehzabin=Shop("Mehzabin")
mehzabin.add_to_cart("Shoes")
mehzabin.add_to_cart("Dress")

nisho=Shop("Afran Nisho")
nisho.add_to_cart("Phone")
nisho.add_to_cart("Watch")

print(mehzabin.cart)
print(nisho.cart)