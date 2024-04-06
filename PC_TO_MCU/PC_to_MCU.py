import serial
import time

port = "COM15"
baud_rate = 9600

ser = serial.Serial(port, baud_rate)
time.sleep(2)

str_to_send = "Finance Minister Arun Jaitley Tuesday hit out at former RBI governor Raghuram Rajan for predicting that the next banking crisis would be triggered by MSME lending, saying postmortem is easier than taking action when it was required. Rajan, who had as the chief economist at IMF warned of impending financial crisis of 2008, in a note to a parliamentary committee warned against ambitious credit targets and loan waivers, saying that they could be the sources of next banking crisis. Government should focus on sources of the next crisis, not just the last one. In particular, government should refrain from setting ambitious credit targets or waiving loans. Credit targets are sometimes achieved by abandoning appropriate due diligence, creating the environment for future NPAs,Rajan said in the note.Both MUDRA loans as well as the Kisan Credit Card, while popular, have to be examined more closely for potential credit risk. Rajan, who was RBI governor for three years till September 2016, is currently.\n"

total_bits = len(str_to_send) * 8

t1 = time.time()
ser.write(str_to_send.encode())
t2 = time.time()

total_time = t2 - t1

rate = total_bits / total_time
print("Data transmission rate:", rate, "bps")

ser.close()
