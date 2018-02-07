class firstclass:
    eyes = 'brown'
    age = 19
    def growuponeyear(self):
    	self.age +=1
        print "you are now years old " + str(self.age)
    def say(self):
        print "hello:)"
obj = firstclass()
obj.say()
obj.growuponeyear()
