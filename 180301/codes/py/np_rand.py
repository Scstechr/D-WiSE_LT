import numpy as np
import matplotlib.pyplot as plt

def main():
    R = np.random.rand(10000)

    plt.hist(R, bins=1000)

    plt.show()

if __name__ == "__main__":
    main()
