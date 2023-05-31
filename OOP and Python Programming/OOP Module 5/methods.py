def call():
    print("Calling  someone I don't  know")
    return "Calling  done"
    

class Phone:
    name="Samsung",
    price=19000,
    color="Blue",
    features=['camera','speaker']

    def call(self):
        print("calling one person")
    
    def sending_sms(self,phone,sms):
        text=f'sending sms to: {phone} and message: {sms}'
        return  text

my_phone=Phone()
result=my_phone.sending_sms(42556638,'I miss you')
print(result)