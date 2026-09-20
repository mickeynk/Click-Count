import turtle
import math
import random
 
screen = turtle.Screen()
screen.bgcolor("black")
screen.tracer(0, 0)  # ปิดการวาดอัตโนมัติ เพื่อคุมเฟรมเองให้ลื่น และกระพริบได้จริง
 
t = turtle.Turtle()
t.speed(0)
t.hideturtle()
t.pensize(1)
 
colors = ["red", "blue", "lime", "yellow", "cyan", "magenta", "orange", "pink"]
 
# คำนวณตำแหน่งจุดบนเส้นขอบหัวใจไว้ล่วงหน้า (สูตร parametric heart)
points = []
for i in range(120):
    angle = i * (math.pi * 2) / 120
    x = 16 * (math.sin(angle) ** 3) * 15
    y = (13 * math.cos(angle) - 5 * math.cos(2 * angle)
         - 2 * math.cos(3 * angle) - math.cos(4 * angle)) * 15
    points.append((x, y))
 
 
def draw_frame():
    """วาดหัวใจ 1 เฟรม โดยสุ่มสีใหม่ทุกจุด แล้วเรียกตัวเองซ้ำ = กระพริบ"""
    t.clear()
    for x, y in points:
        t.penup()
        t.goto(0, 40)
        t.color(random.choice(colors))
        t.pendown()
        t.goto(x, y)
        for _ in range(8):
            t.forward(6)
            t.backward(6)
            t.right(45)
    screen.update()
    screen.ontimer(draw_frame, 400)  # อัปเดตเฟรมใหม่ทุก 400 มิลลิวินาที = จังหวะกระพริบ
 
 
draw_frame()
screen.mainloop()
 