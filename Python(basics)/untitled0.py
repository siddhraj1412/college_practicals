# -*- coding: utf-8 -*-
"""
Created on Wed Sep 18 09:19:24 2024

@author: siddh
"""
import numpy as np 
arr=[1,2,3,4,5]
s=np.eye(2,4)
p=np.zeros(3)
i=np.zeros_like(arr,float)
j=np.empty_like(arr,float)
k=np.eye(4,5)
n=np.identity(3,dtype=float)
print(s)
print("\n")
print(p)
print(i)
print(j)
print(k)
print(n)