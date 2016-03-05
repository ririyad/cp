class Employee:

    empcount = 0
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.empcount+=1

    def disPlayCount(self):
        print("Total Employee: " + Employee.empcount)

    def disPlayEmployee(self):
        print("Name: ", self.name, " Salary: ", self.salary)


emp1 = Employee("Zara", 5000)
emp2 = Employee("Mubin", 7000)

emp1.disPlayEmployee()
emp2.disPlayEmployee()

print("Total number of Employee: ", Employee.empcount)
