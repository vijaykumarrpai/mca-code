from tkinter import *
from tkinter import filedialog
# root = Tk()
# root.title("hello")
# top = Toplevel()
# top.title("Python")
# root.iconify()
# top.mainloop()

# m1 = PanedWindow()
# m1.pack(fill = BOTH, expand = 1)

# left = Entry(m1, bd = 5)
# m1.add(left)

# m2 = PanedWindow(m1, orient = VERTICAL)
# m1.add(m2)

# top = Scale(m2, orient = HORIZONTAL)
# m2.add(top)

# bottom = Button(m2, text = "OK")
# m2.add(bottom)
# mainloop()

# root = Tk()
# labelframe = LabelFrame(root, labelanchor = 'sw', text = "This is a LabelFrame", highlightbackground = 'red', highlightcolor = 'yellow')
# labelframe.pack(fill = "both", expand = "yes") 
# left = Label(labelframe, text = "Inside the LabelFrame")
# left.pack()
# mainloop()

# root = Tk()
# frame = Frame(root)
# frame.pack()
# bottomframe = Frame(root)
# bottomframe.pack(side = BOTTOM)
# redbutton = Button(frame, text = "Red", fg = "red")
# redbutton.pack(side = LEFT)

# greenbutton = Button(frame, text = "Green", fg = "green")
# greenbutton.pack(side = LEFT)

# bluebutton = Button(frame, text = "Blue", fg = "blue")
# bluebutton.pack(side = LEFT)

# yellowbutton = Button(frame, text = "Yellow", fg = "yellow")
# yellowbutton.pack(side = RIGHT)

# blackbutton = Button(frame, text = "Black", fg = "black")
# blackbutton.pack(side = BOTTOM)

# pinkbutton = Button(frame, text = "Pink", fg = "pink")
# pinkbutton.pack(side = RIGHT)

# entry = Entry(bottomframe)
# entry.pack()
# mainloop()

# root = Tk()
# root.filename = filedialog.asksaveasfilename(initialdir = "/", title = "Select file", filetypes = (("doc files", "*.docx"), ("all files", "*.*")))
# print(root.filename)
# mainloop()


# root = Tk()
# root.filename = filedialog.askopenfilename(initialdir = "/", title = "Select file", filetypes = (("doc files", "*.docx"), ("all files", "*.*")))
# print(root.filename)
# mainloop()

root = Tk()
root.directory = filedialog.askdirectory()
print(root.directory)

