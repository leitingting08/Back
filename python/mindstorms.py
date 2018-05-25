# -*- coding: utf-8 -*- 
import turtle

def draw_square(some_turtle):
	for i in range(1,5):
		some_turtle.forward(100)
		some_turtle.right(90)

def draw_art():
	window = turtle.Screen()
	# 背景墙的颜色
	window.bgcolor("red") 

	brad = turtle.Turtle()
	# 画笔的形状是乌龟
	brad.shape("turtle") 
	# 画的线颜色是黄色
	brad.color("yellow") 
	# 前进的速度是2
	brad.speed(2) 
	draw_square(brad)
	angle = turtle.Turtle()
	angle.shape("arrow")
	angle.color("blue")
	angle.speed(2)
	angle.circle(100)

	window.exitonclick()

draw_art()