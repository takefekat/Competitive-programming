import  numpy as np

def sigmoid(a):
    if 0 <= a:
        return 1 / (1 + np.exp(-a))
    else:
        return 1 - 1 / (1 + np.exp(a))


print(sigmoid(-1))
