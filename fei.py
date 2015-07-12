#!/usr/bin/python 

import mylib

print "Hi, Fei"

mylib.sayHi("Fei")
mylib.sayHi("Tao")

List = [1, 3, 2, 4]
mylib.printList(List)

Sorted = mylib.sort(List)
mylib.printList(Sorted)
