from socket import *
serverName = '192.168.1.104'
serverPort = 12000
clientSocket =socket(AF_INET,SOCK_DGRAM)
message=input('Input lowercase sentence:\n').encode("utf-8")
clientSocket.sendto(message,(serverName,serverPort))
modifiedMessage, serverAddress=clientSocket.recvfrom(2048)
print(modifiedMessage)
clientSocket.close()
