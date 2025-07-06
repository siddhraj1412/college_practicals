# -*- coding: utf-8 -*-
"""
Created on Tue Jul 16 14:44:13 2024

@author: siddh
"""
n1=input()
n2=input()
n3=input()
if n1>n2 and n2>n3:
    print("greater is n1")
if n2>n1 and n1>n3:
    print("greater is n2")
if n3>n2 and n2>n1:
    print("greater is n3")