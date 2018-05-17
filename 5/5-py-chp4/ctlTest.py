# click.py
import HookManager
from graphics import *

def drawTriangle(win):
    p1 = Point(0, 0)
    p2 = Point(0, 0)
    p3 = Point(0, 0)
    for i in range(40):
        p = win.getMouse()
        if (p1.getX() == 0):
            p1 = p
        elif (p2.getX() == 0):
            p2 = p
        elif (p3.getX() == 0):
            p3 = p
        else:
            triangle = Polygon(p1, p2, p3)
            #triangle.setFill("red")
            triangle.setOutline("blue")
            triangle.draw(win)
            p1 = Point(0, 0)
            p2 = Point(0, 0)
            p3 = Point(0, 0)

def drawText(win):
    p = win.getMouse()

    if (p.getX() < 10 and p.getY() < 10):
        win.close()
    else:
        #key = win.getKey()
        key = "Here"
        txt = Text(p, key)
        txt.draw(win)



def main():
    win = GraphWin("Click Me!", 300, 300)
    
    #drawTriangle(win)

    #Press area(0,0)~(10, 10) to close window
    drawText(win)


main()
