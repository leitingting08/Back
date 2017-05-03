import turtle

def draw_square(angie):
    
    for i in range(1,10):
        angie.right(80)
        angie.forward(100)
        angie.right(90)
        angie.forward(100)
        angie.right(90)
        angie.forward(100)
        angie.right(90)
        angie.forward(100)
        angie.right(90)

def draw_art():
    window = turtle.Screen()
    window.bgcolor("red")
    brad = turtle.Turtle()
    brad.shape("turtle")
    brad.color("yellow")
    brad.speed(2)
    draw_square(brad)
    

    window.exitonclick()
    
draw_art()
