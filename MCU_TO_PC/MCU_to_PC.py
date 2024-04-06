import serial
import time

port = "COM15"
baud_rate = 9600

ser = serial.Serial(port, baud_rate)
time.sleep(2)

ser.write(b"0\n1005\n")

t1 = time.time()

r_str = ser.readline().decode().strip()

t2 = time.time()

total_time = t2 - t1
total_bits = len(r_str) * 8

rate = total_bits / total_time
print("Data transmission rate:", rate, "bps")

print("Received string from Arduino:", r_str)

ser.close()
