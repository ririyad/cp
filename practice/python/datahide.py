class JustCount:

    __secretCount = 0;
    def count(self):
        self.__secretCount +=1
        print(self.__secretCount)

cont1 = JustCount()
cont1.count()
cont1.count()
print(cont1.__secretCount) #creats a problem
