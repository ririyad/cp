class Parent:
    parentAttr = 30

    def __init__(self):
        print("Calling from parent constructor")

    def parentMethod(self):
        print("calling from parent method")

    def setAttr(self, attr):
        Parent.parentAttr = attr

    def getAttr(self):
        print("Parent Attribute: ", Parent.parentAttr)

class Child(Parent):

    def __init__(self):
        print("Calling Child Constructor")

    def childMethod(self):
        print("Calling from Child method")
c = Child()
c.childMethod()
c.parentMethod()
c.setAttr(500)
c.getAttr()
