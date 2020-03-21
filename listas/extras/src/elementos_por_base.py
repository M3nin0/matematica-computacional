# -*- coding: utf-8 -*-
import math
import matplotlib.pyplot as plt

number = 42
bases = range(2, 17)
bases_len = [math.log(number, base) for base in bases]

plt.figure(dpi=300)
plt.plot(bases_len)
plt.xlabel("Bases")
plt.ylabel("$Log_b$N")
plt.title(f"Tamanho do número {str(number)} em diferentes bases")
plt.xticks(range(0, 16), labels=bases)
plt.savefig("42_len_bases.png")
