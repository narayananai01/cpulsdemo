import mysql.connector
con = mysql.connector.Connet(
    host ="192.168.1.240",
    user = "AIBACTH01",
    password="AI@123",
    database="ai_naveen"
)
print(con)
result=con.cursor()
result.execute("show tables")
result_show=result.fetchall()
for x in result_show:
  print(x)

   
'''import mysql.connector
con = mysql.connector.connect(
    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="ai_yogarajan"
)
print(con)
result=con.cursor()
result.execute("show tables")
resultshow=result.fetchall()
for x in resultshow:
    print(x)
    '''