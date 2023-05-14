import serial
ser=serial.Serial('COM5',9600)

def control(command):
    if 'on' in command:
        ser.write(b'Y')
    if 'off' in command:
        ser.write(b'N')

while True:
    command=input("Enter on to Trur on LED & off to turn LED")
    control(command)