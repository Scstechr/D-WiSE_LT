import numpy as np
import matplotlib.pyplot as plt

def main():
    mu = -2
    sigma2 = 5
    R = np.random.normal(mu, sigma2, 10000)

    plt.hist(R, bins=1000)

    plt.show()


if __name__ == "__main__":
    main()

