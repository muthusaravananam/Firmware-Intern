##FIRMWARE INTERN TASK

## PC to MCU Data Transfer
pc_to_mcu_process = """
1. Connect the PC and MCU using a UART communication.
2. move to the PC_TO_MCU directory.
3. Run the write_to_EEPROM.ino file to set the mcu to receive data and write it into a EEPROM.
4. Then run the PC_to_MCU.py python program to send the string data and calculate the data transfer speed.
"""

## MCU to PC Data Transfer


mcu_to_pc_process = """
1. Connect the PC and MCU using a UART communication.
2. Move to the MCU_to_PC Directory.
3. Run the read_from_EEPROM.ino file to set the mcu to read the data in EEPROM and ready to send it to PC.
4. Then run the MCU_to_PC.py python file to get the data and print the data in console and calculate the data transfer speed and print it.
"""


