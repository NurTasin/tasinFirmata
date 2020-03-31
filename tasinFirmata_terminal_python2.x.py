import serial as ser
import time
commands=['D2 HIGH','D2 LOW',
		'D3 HIGH', 'D3 LOW',
		'D4 HIGH', 'D4 LOW',
		'D5 HIGH', 'D5 LOW',
		'D6 HIGH', 'D6 LOW',
		'D7 HIGH', 'D7 LOW',
		'D8 HIGH', 'D8 LOW',
		'D9 HIGH', 'D9 LOW',
	   'D10 HIGH','D10 LOW',
	   'D11 HIGH','D11 LOW',
	   'D12 HIGH','D12 LOW',
	   'D13 HIGH','D13 LOW',
	   'D2 READ' ,
	   'D3 READ' ,
	   'D4 READ' ,
	   'D5 READ' ,
	   'D6 READ' ,
	   'D7 READ' ,
	   'D8 READ' ,
	   'D9 READ' ,
	  'D10 READ' ,
	  'D11 READ' ,
	  'D12 READ' ,
	  'D13 READ' ,
	  			'A0 READ',
	  			'A1 READ',
	  			'A2 READ',
	  			'A3 READ',
	  			'A4 READ',
	  			'A5 READ']

user=str(raw_input("What is your name: "))
port_=str(raw_input("Enter the port to connect: "))

try:
	board=ser.Serial(port_,115200,timeout=0.1)
except ser.serialutil.SerialException:
	print("Board is offline")
	quit()
if board.isOpen():
	board.close()

board.open()
now=time.time()
conStr=""
n=0
board.write("TASIN_FIRMATA_VER".encode())
while n<=50:
	c=board.read()
	c=str(c)
	c=c.encode()
	if c!="\n":
		conStr=conStr+c
		n=n+1
	elif c=="\n":
		break
if conStr=="":
	print("TASIN_FIRMATA is not installed on the board @ {}. \nGet it on https://github.com/NurTasin/tasinfirmata.git. \nInstall the firmware on UNO and reset the Arduino".format(board.port))
	quit()
else:
	print("TASIN_FIRMATA Found . Version: {}".format(conStr))
print("Board is online now @{} @{} b/s".format(board.port,board.baudrate))
while True:
	command=str(raw_input("{}@TASIN_FIRMATA:{}/ $".format(user,board.port)))
	if command=='quit':
		break
	elif command in commands:
		board.write(command.encode())
		finalStr=""
		while True:
			output=board.read()
			output=str(output)
			output=output.decode()
			if output!="\n":
				finalStr=finalStr+output
			elif output=="\n":
				break
		print(finalStr)
	elif command not in commands:
		print("{}: no command found".format(command))

board.close()