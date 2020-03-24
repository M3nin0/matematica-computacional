# -*- coding: utf-8 -*-
import numpy as np
import scipy.interpolate
import matplotlib.pyplot as plt

def trapezoidal_rule_fnc(fnc, integral_start, integral_end, parts):
    h = (integral_end - integral_start) / parts
    interval = np.arange(integral_start, integral_end + h, h)
    
    y_values = fnc(interval[interval <= integral_end])
    result = y_values[0] + (2 * np.sum(y_values[1:-1])) + y_values[-1]
    
    return result * (h / 2)

x = list(range(0, 22, 2))
fx = [0, 1.8, 2., 4., 4., 6., 4., 3.6, 3.4, 2.8, 0]

fx_interp = scipy.interpolate.interp1d(x, fx)

results = [trapezoidal_rule_fnc(fx_interp, 0, 20, i) for i in range(10, 50)]
