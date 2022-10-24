import pyqrcode 
from pyqrcode import QRCode 
  
qr = "https://github.com/GDSC-MITS/Contribute-To-HacktoberFest"
url = pyqrcode.create(qr) 
url.svg("hactoberfest.svg", scale = 8) 