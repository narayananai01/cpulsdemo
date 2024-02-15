'''from tkinter import *

app=Tk()
app.title("frist python gui create app")
app.geometry("500x200+500+100")
app.config(bg="green")

def clickresult():
  details="comedy story"
  app.config(text=details, fg="green")



lblTitle=Label(app,text="Movie Name")
lblTitle.grid(row=0, column=1, padx=40, pady=40)

inputbox1=Entry(app,width=30)
inputbox1.grid(row=0, column=2)

lblTitle1=Label(app,text="orange mittai")
lblTitle1.grid(row=0, column=6, padx=40, pady=40)

inputbox2=Entry(app,width=30)
inputbox2.grid(row=1, column=2)

clickme=Button(app, text="click file")
clickme.grid(row=1, column=1, padx=40, pady=40)

inputbox2=Entry(app,width=30)
inputbox2.grid(row=1, column=3)


clickme=Button(app, text="new title")
clickme.grid(row=2, column=1, padx=40, pady=40)

app.mainloop()'''

from tkinter import *

app=Tk()
app.title("naturual content")
app.geometry("500x500+500+100")
app.config(bg="yellow")
# app.state("zoomed")

def clickresult():
    a=10
    b=10
    c=a+b
    lblTitle.config(text=c, fg="red")


lblTitle=Label(app,text="agricultural Operations")
lblTitle.grid(row=0, column=1, padx=40, pady=40)

inputbox1=Entry(app,width=30)
inputbox1.grid(row=0, column=2)


lblTitle1=Label(app,text="vegetables")
lblTitle1.grid(row=1, column=1, padx=40, pady=40)

inputbox2=Entry(app,width=30)
inputbox2.grid(row=1, column=2)


clickme=Button(app, text="total value", command=clickresult, )
clickme.grid(row=2, column=8, padx=40, pady=40)



app.mainloop()

# def clickresult():
#     a=10
#     b=10

#     print("added value is ", a+b)

# clickresult()