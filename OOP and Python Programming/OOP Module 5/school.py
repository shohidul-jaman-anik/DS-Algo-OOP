class Student:
    def __init__(self,name,current_class,id):
        self.name=name
        self.current_class=current_class
        self.id=id

    def  __repr__(self) -> str:
        return f"Student with name:{self.name}, class:{self.current_class}, id:{self.id}"


class Teacher:
    def __init__(self,name,subject,id) -> None:
        self.name=name
        self.subject=subject
        self.id=id

    def __repr__(self) -> str:
        return f'Teacher with name:{self.name},class:{self.subject},id:{self.id}'
        

class School:
    def __init__(self,name) -> None:
        self.name=name
        self.teachers=[]
        self.students=[]

    def add_teacher(self,name,subject):
        id=len(self.teachers)+101
        teacher=Teacher(name,subject,id)
        self.teachers.append(teacher)
    
    def enroll(self,name,fee):
        if  fee<6500:
            return  "Not enought fee"
        else:
            id = len(self.students) + 1
            student=Student(name,'C++',id)
            self.students.append(student)
            return f"{name} is enroll with id{id}, extra money{fee-6500}"
        
    def  __repr__(self) -> str:
        print(f"welcome to {self.name}")
        print("---------Our Teachers---------")
        for teacher in self.teachers:
            print(teacher)
        print("--------Our Student------------")
        for student in self.students:
            print(student)

        return "All done  for now"
        


# alia=Student("Alia Khatun",9,1)
# ranbir=Teacher("Ranbir Kapur","Algorithm",101)
# print(alia)
# print(ranbir)

phitron=School("Phitron")
phitron.enroll("Alia",4000)
phitron.enroll("Dipika",8000)
phitron.enroll("Vhijan",7500)

phitron.add_teacher("Tom Cruise","Data Structure")
phitron.add_teacher("Shakib Khan","Algorithm")
phitron.add_teacher("Shahruk Khan","OOP")

print(phitron)