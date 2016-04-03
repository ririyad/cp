class SchoolMember:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        print('Initialized school member:{} '.format(self.name))

    def tell(self):
        print('Name: {}, Age: {}.'.format(self.name, self.age), end=" ")


class Teacher(SchoolMember):
    def __init__(self, name, age, salary):
        SchoolMember.__init__(self, name, age)
        self.salary = salary
        print('Initialized teacher: {}.'.format(self.name))

    def tell(self):
        SchoolMember.tell(self)
        print('Salary: "{:d}"'.format(self.salary))


class Student(SchoolMember):
    def __init__(self, name, age, marks):
        SchoolMember.__init__(self, name, age)
        self.marks = marks
        print('Initialized student {}'.format(self.name))

    def tell(self):
        SchoolMember.tell(self)
        print('Marks: {}'.format(self.marks))

t = Teacher('Anwar', '50', 40000)
s = Student('Riyad', '24', 00000)

print()

members = [t, s]
for member in members:
    member.tell()
