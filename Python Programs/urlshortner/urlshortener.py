import pyshorteners

link = input("\nEnter your link : ")

short = pyshorteners.Shortener()
x = short.tinyurl.short(link)

print("\nShorted link is : "+x)