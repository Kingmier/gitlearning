# Homework of Chapter 4

from graphics import *

#Pr01
def pr01():
    win = GraphWin("Practice01 of Chapter4", 400, 400)
    shape = Rectangle(Point(50, 50), Point(70, 65))
    shape.setOutline("red")
    shape.setFill("red")
    shape.draw(win)
    for i in range(10):
        p = win.getMouse()
        c = shape.getCenter()
        dx = p.getX() - c.getX()
        dy = p.getY() - c.getY()
        shapeT = shape.clone()
        shapeT.move(dx,dy)
        shapeT.draw(win)
    warnPos = win.getMouse()
    warnInfo = Text(Point(200, 200), "Click again to quit")
    warnInfo.draw(win)
    win.getMouse()
    win.close()

def targetPr02():
    win = GraphWin("Practice02 target", 350, 350)
    centPt = Point(175, 175)
    circle1 = Circle(centPt, 175)
    circle1.setFill("white")
    circle1.draw(win)

    
    circle1 = Circle(centPt, 140)
    circle1.setFill("black")
    circle1.draw(win)

    
    circle1 = Circle(centPt, 105)
    circle1.setFill("blue")
    circle1.draw(win)

    
    circle1 = Circle(centPt, 70)
    circle1.setFill("red")
    circle1.draw(win)

    
    circle1 = Circle(centPt, 35)
    circle1.setFill("yellow")
    circle1.draw(win)
#def facePr03():

def chrismasTreeAndSnowMan():
    wnd = GraphWin("Chrisma tree and snow man", 500, 400)

    # draw tree
    polUp = Polygon(Point(125, 70), Point(100, 100), Point(150, 100))
    polUp.setFill("white")
    
    polMid = Polygon(Point(125, 90), Point(75, 130), Point(175, 130))
    polMid.setFill("white")

    polDwn = Polygon(Point(125, 120), Point(50, 180), Point(200, 180))
    polDwn.setFill("white")

    polDBot = Polygon(Point(125, 170), Point(20, 230), Point(230, 230))
    polDBot.setFill("white")

    rect = Rectangle(Point(110, 230), Point(140, 350))
    rect.setFill("white")

    polDBot.draw(wnd)
    polDwn.draw(wnd)
    polMid.draw(wnd)
    polUp.draw(wnd)
    rect.draw(wnd)

    # draw snow man
    # head
    cirHead = Circle(Point(375, 215), 45)
    cirHead.setFill("white")

    # body
    cirBody = Circle(Point(375, 290), 65)
    cirBody.setFill("white")

    # left eye
    cirEyeL = Circle(Point(360, 200), 5)
    cirEyeL.setFill("black")

    # right eye
    cirEyeR = cirEyeL.clone()
    cirEyeR.move(30, 0)
    cirEyeR.setFill("black")

    # mouth
    ovalMou = Oval(Point(360, 230), Point(390, 240))
    ovalMou.setFill("red")

    # fastener
    cirFstn1 = Circle(Point(375, 280), 6)
    cirFstn1.setFill("blue")
    cirFstn2 = cirFstn1.clone()
    cirFstn2.move(0, 20)
    cirFstn3 = cirFstn1.clone()
    cirFstn3.move(0, 40)

    cirBody.draw(wnd)
    cirHead.draw(wnd)

    cirEyeL.draw(wnd)
    cirEyeR.draw(wnd)

    ovalMou.draw(wnd)

    cirFstn1.draw(wnd)
    cirFstn2.draw(wnd)
    cirFstn3.draw(wnd)
    
def main():
    # Practice 01
    #pr01()

    # Practice 02
    #targetPr02()

    # Practice 04
    chrismasTreeAndSnowMan()
    
main()
