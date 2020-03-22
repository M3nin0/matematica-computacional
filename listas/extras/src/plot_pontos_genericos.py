# -*- coding: utf-8 -*-
"""
Created on Sun Mar 22 10:56:37 2020

@author: felipe
"""

import matplotlib.pyplot as plt

x = [1, 2]
fx = [2, 3]

plt.figure(dpi=300)
plt.subplot(1, 2, 1)
plt.title("(A)")
plt.plot(x, fx, marker = 'o', 
             linestyle = '', markersize = 6, color = 'red')

plt.subplot(1, 2, 2)
plt.title("(B)")
plt.plot(x, fx, marker = 'o', 
             linestyle = '', markersize = 6, color = 'red')
plt.arrow(1, 2, .95, .95, fc='k', ec='k', head_width=0.03)
plt.yticks([])

plt.savefig("../imagens/passos_exercicio3_extra.png")
