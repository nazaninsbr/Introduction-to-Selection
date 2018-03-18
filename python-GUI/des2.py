from tkinter import *

class ProgGUI:
	def __init__(self):
		self.root = Tk()
		self.makeIntroWindows()
		self.mainLoop()

	def eventResponder(self, event):
		print("Left click")
	def makeLoginWindow(self):
		l1 = Label(self.root, text="Username")
		l2 = Label(self.root, text="Password")
		e1 = Entry(self.root)
		e2 = Entry(self.root)

		l1.grid(row=0, column=0, sticky=E)
		l2.grid(row=1, column=0, sticky=E)
		e1.grid(row=0, column=2)
		e2.grid(row=1, column=2)

		button1 = Button(text="Login", fg="lightblue")
		button1.grid(columnspan=2, column=1)


	def makeIntroWindows(self):
		screenLabel = Label(text="Instagram # Alanyser", bg="lightblue")
		screenLabel.pack(fill=X)

		frame1 = Frame(self.root)
		frame1.pack(side=TOP)
		frame2 = Frame(self.root)
		frame2.pack(side=BOTTOM)

		button1 = Button(frame1, text="Login", fg="green")
		button2 = Button(frame1, text="Continue With Default User", fg="blue")
		button3 = Button(frame2, text="Exit", fg="purple")
		button3.bind("<Button-1>", self.eventResponder)
		button1.pack(side=LEFT)
		button2.pack()
		button3.pack()

	def makeButton(self, frameName, textField, color, position=""):
		button1 = Button(frameName, text=textField, fg=color)
		if position=="":	
			button1.pack()
		elif position=="left":
			button1.pack(side=LEFT)
		elif position=="right":
			button1.pack(side=RIGHT)
		elif position=="bottom":
			button1.pack(side=BOTTOM)
		elif position=="top":
			button1.pack(side=TOP)

	def makeFrame(self, position):
		thisFrame = Frame(self.root)
		if position=="TOP":
			thisFrame.pack(side=TOP)
		elif position=="BOTTOM":
			thisFrame.pack(side=BOTTOM)
		return thisFrame

	def makeLabel(self, bgcolor, fillVal="", position=""):
		screenLabel = Label(text="Instagram # Alanyser", bg=bgcolor)
		screenLabel.pack()
		if position=="":
			if fillVal=="":	
				screenLabel.pack()
			if fillVal=="X":	
				screenLabel.pack(fill=X)
			if fillVal=="Y":	
				screenLabel.pack(fill=Y)
		elif position=="left":
			if fillVal=="":	
				screenLabel.pack(side=LEFT)
			if fillVal=="X":	
				screenLabel.pack(side=LEFT, fill=X)
			if fillVal=="Y":	
				screenLabel.pack(side=LEFT, fill=Y)
		elif position=="right":
			if fillVal=="":	
				screenLabel.pack(side=RIGHT)
			if fillVal=="X":	
				screenLabel.pack(side=RIGHT, fill=X)
			if fillVal=="Y":	
				screenLabel.pack(side=RIGHT, fill=Y)
		elif position=="bottom":
			if fillVal=="":	
				screenLabel.pack(side=BOTTOM)
			if fillVal=="X":	
				screenLabel.pack(side=BOTTOM, fill=X)
			if fillVal=="Y":	
				screenLabel.pack(side=BOTTOM, fill=Y)
		elif position=="top":
			if fillVal=="":	
				screenLabel.pack(side=TOP)
			if fillVal=="X":	
				screenLabel.pack(side=TOP, fill=X)
			if fillVal=="Y":	
				screenLabel.pack(side=TOP, fill=Y)

	def mainLoop(self):
		self.root.mainloop()

pgui = ProgGUI()
