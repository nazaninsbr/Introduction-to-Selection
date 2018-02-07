class Dog:
	def __init__(self, name):
		self.name = name
		self.tricks = []
	def add_trick(self, trick):
		self.tricks.append(trick)

d = Dog('Dots')
d.add_trick('roll')
print(d.tricks)
