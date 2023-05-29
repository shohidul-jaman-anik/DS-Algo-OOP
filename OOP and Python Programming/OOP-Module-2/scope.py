blance=5000

def shoppint(item,price):
    global blance
    blance=blance-price
    print(f"New blance is {blance}")

money=shoppint("Shirt",1500)
print(blance)