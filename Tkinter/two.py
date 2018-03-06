import tkinter as tk

class GUI:
	def __init__(self):
		self.root = tk.Tk()

	def shod_hello_window(self):
		w = tk.Label(self.root, text="Hello Tkinter!")
		w.pack()
		self.root.mainloop()

	def showImage(self):
		logo = tk.PhotoImage(file="im_one.gif")

		w1 = tk.Label(self.root, image=logo).pack(side="right")

		explanation = """At present, only GIF and PPM/PGM
				formats are supported, but an interface 
				exists to allow additional image file
				formats to be added easily."""

		w2 = tk.Label(self.root, 
              justify=tk.LEFT,
              padx = 10, 
              text=explanation).pack(side="left")
		self.root.mainloop()


if __name__ == '__main__':
	gui = GUI()
	gui.showImage()