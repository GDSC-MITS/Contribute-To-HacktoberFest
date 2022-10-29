from threading import *
from tkinter import *
from tkinter.ttk import *
from time import strftime 

import time
class hello(Thread):
    def run(self):
        for i in range(50):
            time.sleep(1)            
            print("hello")
class hi(Thread):
    def run(self):

        root = Tk() 
        root.title('Clock') 
        def time(): 
            string = strftime('%H:%M:%S %p') 
            lbl.config(text = string) 
            lbl.after(1000, time) 
        lbl = Label(root, font = ('calibri', 40, 'bold'), 
			background = 'white', 
			foreground = 'red') 
        lbl.pack(anchor = 'center') 
        time() 

        mainloop() 

            
t1=hello()
t2=hi()
t1.start()
time.sleep(1)
t2.start()

