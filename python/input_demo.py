# -*- coding: utf-8 -*-
# @Author: Administrator
# @Date:   2018-07-07 16:08:35
# @Last Modified by:   Administrator
# @Last Modified time: 2018-07-07 16:24:43
names = input('Enter names separated by commas: ').title().split(',')
assignments = input("Enter assignment counts separated by commas: ").split(",")
grades = input("Enter grades separated by commas: ").split(",")
message = "Hi {},\n\nThis is a reminder that you have {} assignments left to \
submit before you can graduate. You're current grade is {} and can increase \
to {} if you submit all assignments before the due date.\n\n"

for name, assignment, grade in zip(names, assignments, grades):
    print(message.format(name, assignment, grade, int(grade) + int(assignment)*2))