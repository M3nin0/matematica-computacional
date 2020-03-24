# -*- coding: utf-8 -*-
"""
Created on Mon Mar 23 21:09:56 2020

@author: felipe
"""

import numpy as np
import scipy.interpolate
import matplotlib.pyplot as plt

x = list(range(0, 22, 2))
fx = [0, 1.8, 2., 4., 4., 6., 4., 3.6, 3.4, 2.8, 0]

fx_interp = scipy.interpolate.interp1d(x, fx, fill_value="extrapolate")

fx_interpolated = [float(fx_interp(i)) for i in range(0, 21)]
plt.plot(fx_interpolated)

def trapezoidal_rule_fnc(fnc, integral_start, integral_end, parts):
    h = (integral_end - integral_start) / parts
    
    y_values = fnc(np.arange(integral_start, integral_end + h, h))
    result = y_values[0] + (2 * np.sum(y_values[1:-1])) + y_values[-1]
    
    return result * (h / 2)

results = [trapezoidal_rule_fnc(fx_interp, 0, 20, i) for i in range(10, 50)]

trapezoidal_rule_fnc(fx_interp, 0, 20, 10)
trapezoidal_rule_fnc(fx_interp, 0, 20, 19)

