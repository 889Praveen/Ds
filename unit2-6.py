from matoperation import *

x = 0
y = 0
choice = 0
mat = []
mat2 = []

while True:
    print("\n1:initializeOfMat")
    print("2:additionOfMat")
    print("3:maltiplicatrionOfMat")
    print("4:display")
    print("5:exit")
    choice = int(input("Enter your choice:"))

    if choice == 1:
        x = int(input("Enter your Lenngth of Row:"))
        y = int(input("Enter your Lenngth of Column:"))
        mat = createMat(x, y, mat)
        mat2 = createMat(x, y, mat2)
        print("initialize of Matrix 1 Value: ")
        mat = initializeOfMat(x, y, mat)
        print("initialize of Matrix 2 Value: ")
        mat2 = initializeOfMat(x, y, mat2)

    elif choice == 2:
        if mat != [] and mat2 != []:
            print("addition of Matrix 1 and 2: ")
            result = []

            result = additionOfMat(x, y, mat, mat2)

            display(x, y, result)
        else:
            print("Please initialize the matrix first")
            continue

    elif choice == 3:
        if mat != [] and mat2 != []:
            print("Multipication of Matrix 1 and 2: ")
            result = []
            result = maltiplicatrionOfMat(x, y, mat, mat2)
            display(x, y, result)
        else:
            print("Please initialize the matrix first")
            continue
    elif choice == 4:
        if mat != [] and mat2 != []:
            print("Matrix 1:")
            display(x, y, mat)
            print("Matrix 2:")
            display(x, y, mat2)
        else:
            print("Please initialize the matrix first")
            continue
    elif choice == 5:
        break
    else:
        print("Invalid choice")
        continue