from tkinter import *
from tkinter import messagebox
# wind = Tk()
# wind.mainloop()

# root = Tk()
# label = Label(root, text = 'How are you doing', relief = SUNKEN, bg = 'blue', cursor = 'target', bd = '4', font = 'Arial', width = 30, underline = 15, fg = 'Yellow')
# label.pack()
# root.mainloop()

# top = Tk()
# def helloCallBack():
#     messagebox.showinfo("Hello Python", "Hello Vijay")
# B = Button(top, image = 'C:\Users\Vijaykumar R Pai.LAPTOP-C26T1P75\Downloads\captain-america-vs-black-panther-4k-1920x1080.jpg', bg = 'orange', font = 'Arial', activebackground = "Red", activeforeground = 'Yellow', command = helloCallBack)
# B.pack()
# top.mainloop()

top = Tk()
# C1 = Checkbutton(top, text = "Music", onvalue = 1, offvalue = 0, height = 5, width = 20)
# C2 = Checkbutton(top, text = "Video", onvalue = 1, offvalue = 0, height = 5, width = 20, state = DISABLED)
# C1.pack()
# C2.pack()
# top.mainloop()

# C = Canvas(top, bg = "lavender", height = 250, width = 300)
# coord = 10, 50, 240, 210
# arc = C.create_arc(coord, start = 0, extent = 150, fill = "pink")
# C.pack()
# top.mainloop()

# C = Canvas(top, bg = "lavender", height = 250, width = 300)
# coord = 20, 80, 80, 40, 140, 80
# arc = C.create_line(coord, fill = "red")
# C.pack()
# top.mainloop()

# C = Canvas(top, bg = "lavender", height = 250, width = 300)
# coord = 10, 10, 80, 80
# arc = C.create_oval(coord, fill = "red")
# C.pack()
# top.mainloop()

# C = Canvas(top, bg = "lavender", height = 250, width = 300)
# coord = 50, 50, 150, 100
# arc = C.create_oval(coord, fill = "red")
# C.pack()
# top.mainloop()

C = Canvas(top, bg = "lavender", height = 250, width = 300)
coord = 20, 50, 40, 50, 40, 20, 60, 20, 60, 50, 80, 50, 80, 70, 20, 70
arc = C.create_polygon(coord, fill = "red")
C.pack()
top.mainloop()