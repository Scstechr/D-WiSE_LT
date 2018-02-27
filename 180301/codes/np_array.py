import numpy as np

def main():
    lst = [i for i in range(10)]
    print(lst, type(lst))

    array = np.array(lst)
    print(array, type(array))

if __name__ == "__main__":
    main()
