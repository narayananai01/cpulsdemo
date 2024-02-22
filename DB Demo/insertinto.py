from tkinter import *
import _mysql_connector
#con=mysql.connector.connect(

host="192.168.1.240",
user="AIBATCH01",
password="AI@123",
database="a"


print(con)
result=con.cursor()
result.execute("show tables")
resultshow=result.fetchall()
for x in resultshow:
    print(x)
win=Tk()

win.title("imsert into mysql DB DEMO")
win.geometry("500x500")


FrameLeft=Frame(win,bg="black",width=500,height=500)
FrameLeft.pack(side = LEFT)

frameright=Frame(win,bg="red",width=500,height=500)
frameright.pack(side = RIGHT)

lbl_title_of_Operation=Label(FrameLeft,text="insert into Mysql DB Demo").pack(side=TOP,padx=40,pady=40)

lblName=Label(FrameLeft,text="Name")
lblName.grid(row=2,column=1,padx=30,pady=10)
lblram=Label(FrameLeft,text="ram")
lblram.grid(row=3,column=1,padx=30,pady=10)


win.mainloop()