class Laptop:
    def __init__(self,brand,price,color,memory) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.memory=memory
    
    def run(self):
        return f"Running laptop {self.brand}"
    
    def coding(self):
        return "Learning python"

class  Phone:
    def __init__(self,brand,price,color,dual_sim) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.dual_sim=dual_sim
    
    def run(self):
        return f"Phone is running..."
    
    def phone_call(self,number,sms):
        return f"Sending SMS To: {number} with:{sms}"

class Camera:
    def __init__(self,brand,price,color,pixel) -> None:
        self.brand=brand
        self.price=price
        self.color=color
        self.pixel=pixel
    
    def run():
        pass 

    def change_lens(self):
        pass



        