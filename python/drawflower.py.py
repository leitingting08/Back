import turtle

def draw_square(angie):
    
    for i in range(1,36):
        angie.right(20)
        angie.forward(60)
        angie.right(60)
        angie.forward(60)
        angie.right(120)
        angie.forward(60)
        angie.right(60)


def draw_art():
    window = turtle.Screen()
    window.bgcolor("red")
    brad = turtle.Turtle()
    brad.shape("turtle")
    brad.color("yellow")
    brad.speed(5)
    draw_square(brad)
    

    window.exitonclick()
    
draw_art()
