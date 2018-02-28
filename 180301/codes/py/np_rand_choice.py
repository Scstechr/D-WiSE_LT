import numpy as np
import matplotlib.pyplot as plt

def main():
    array = np.arange(9)
    pmf = np.zeros(9)

    pmf[2] = 0.5
    pmf[3] = 0.28
    pmf[8] = 0.22

    R = np.random.choice(array, size = 10000, p=pmf)

    #print(R)
    plt.hist(R, bins=100)

    plt.show()

if __name__ == "__main__":
    main()


