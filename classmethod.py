class Employee:
      company="apple"
      def show(self):
            print(f"the name of employee is {(self.name)} in {self.company} company")
      @classmethod
      def changecompany(cls,newcompany): ##### class method 
            cls.company=newcompany      
emp1=Employee()
emp1.name="ANAMAIKA"
emp1.company="herohonda"
emp1.show()
print(Employee.company)
Employee.changecompany("amazon")
print(Employee.company)
