from tkinter import *

class ProgGUI:
	def __init__(self):
		self.root = Tk()
		self.makeWindows()
		self.mainLoop()

	def makeWindows(self):
		self.makeLabel("lightblue", "X")
		frame1 = self.makeFrame('TOP')
		frame2 = self.makeFrame('BOTTOM')
		self.makeButton(frame1, "Login", "green", "left")
		self.makeButton(frame1, "Default User", "blue")
		self.makeButton(frame2, "Exit", "purple")

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
