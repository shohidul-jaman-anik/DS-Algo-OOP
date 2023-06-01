class Gadget:
    def __init__(self,brand,price,color,origin) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.origin=origin
    
    def run(self):
        return f"Running laptop {self.brand}"


class Laptop:
    def __init__(self,memory,ssd) -> None:
        self.memory=memory
        self.ssd=ssd
    
    def coding(self):
        return "Learning python"

class  Phone(Gadget):
    def __init__(self,dual_sim,brand,price,color,origin) -> None:
        self.dual_sim=dual_sim
        super().__init__(brand,price,color,origin)
    
   
    def phone_call(self,number,sms):
        return f"Sending SMS To: {number} with:{sms}"
    
    def __repr__(self) -> str:
        return f"Phone: {self.dual_sim} {self.brand}, {self.price}"

class Camera:
    def __init__(self,pixel) -> None:

        self.pixel=pixel
    
    def run():
        pass 

    def change_lens(self):
        pass


my_phone=Phone(True,"iPhone",120000,"silver","USA")
# my_phone.phone_call()
print(my_phone.brand)
print(my_phone)
        