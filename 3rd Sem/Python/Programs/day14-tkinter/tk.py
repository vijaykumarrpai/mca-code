from tkinter import *
from tkinter import messagebox
import tkinter as tk
top = Tk()
# Lb1 = Listbox(top, selectmode = BROWSE)
# Lb1.insert(1, "Python")
# Lb1.insert(2, "Perl")
# Lb1.insert(1, "C")
# Lb1.insert(1, "PHP")
# Lb1.insert(1, "JSP")
# Lb1.insert(1, "Ruby")
# Lb1.insert(1, "Nodejs")
# Lb1.insert(1, "Angular")
# Lb1.pack()
# top.mainloop()

# mb = Menubutton(top, text = "savory", relief = RAISED)
# mb.grid()
# mb.menu = Menu(mb, tearoff = 0)
# mb["menu"] = mb.menu

# mb.menu.add_checkbutton(label = "Bajji")
# mb.menu.add_checkbutton(label = "Pakoda")
# top.mainloop()

# root = Tk()
# root.withdraw()

# messagebox.showerror("Error", "Error message")
# messagebox.showwarning("Warning", "Warning message")
# messagebox.showinfo("Information", "Informative message")

# root = tk.Tk() #create window
# canvas1 = tk.Canvas(root, width = 800, height = 350)
# canvas1.pack()

# def ExitApplication() :
#     MsgBox = tk.messagebox.askquestion('Exit Application', 'Are you sure you want to exit the application', icon = 'warning')
#     if MsgBox == 'yes':
#         root.destroy()
#     else:
#         tk.messagebox.showinfo('Return', 'You will now return to the application screen')
# button1 = tk.Button(root, text = 'Exit Application', command = ExitApplication)
# canvas1.create_window(97, 270, window = button1)
# root.mainloop()

# def sel():
#     selection = "You selected the option " + str(var.get())
#     label.config(text = selection)

# root = Tk()
# var = IntVar()
# R1 = Radiobutton(root, text = "Option 1", variable = var, value = 1, command = sel)
# R1.pack(anchor = W)
# R2 = Radiobutton(root, text = "Option 2", variable = var, value = 2, command = sel)
# R2.pack(anchor = W)
# R3 = Radiobutton(root, text = "Option 3", variable = var, value = 3, command = sel)
# R3.pack(anchor = W)
# label = Label(root)
# label.pack()
# root.mainloop()

# root = Tk()
# scrollbar = Scrollbar(root)
# scrollbar.pack(side = RIGHT, fill = Y)

# mylist = Listbox(root, yscrollcommand = scrollbar.set)
# for line in range(100):
#     mylist.insert(END, "This is line number " + str(line) + " for scrolling")
# mylist.pack(side = LEFT, fill = BOTH)
# scrollbar.config(command = mylist.yview)

# mainloop()

# L1 = Label(top, text = "Username")
# L1.pack(side = LEFT)
# E1 = Entry(top, bd = 5, justify = RIGHT, selectbackground = 'red', selectborderwidth = 2, selectforeground = 'white')
# E1.pack(side = RIGHT)
# top.mainloop()

# master = Tk()
# val = (1, 2, 4, 6, 8 ,0, -1, -23)
# w = Spinbox(master, values = (1,2,4,6,8,0,-1,-23))
# w.pack()
# mainloop()

def sel():
    selection = "Value = " + str(var.get())
    label.config(text = selection)

root = Tk()
var = DoubleVar()
scale = Scale(root, variable = var, troughcolor = 'blue', width = 25, from_ = +1.0, to = -20.0, resolution = 1, orient = VERTICAL)
scale.pack(anchor = CENTER)
button = Button(root, text = "Get Scale Value", command = sel)
button.pack(anchor = CENTER)
label = Label(root)
label.pack()
root.mainloop()