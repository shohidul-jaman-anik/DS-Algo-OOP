class Phone:
    manufactured:"China"

    def __init__(self,owner,brand,price) :
        self.owner=owner
        self.barnd=brand
        self.price=price

    def  send_sms(self,phone,sms):
        text=f"Sending to {phone} {sms}"
        print(text)

my_phone=Phone("Kala Chan","Oppo",12800)
print(my_phone.owner,my_phone.barnd,my_phone.price)

her_phone=Phone("Lota Begum","I Phone",80000)
print(her_phone.owner,her_phone.barnd,her_phone.price)

# my_phone.send_sms()
# her_phone.send_sms()
