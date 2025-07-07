while True:
        a = float(input("Enter first number: "))
        b = float(input("Enter second number: "))
        print("\nChoose operation:")
        print("1. Addition")
        print("2. Subtraction")
        print("3. Multiplication")
        print("4. Division")
        op = int(input("Enter operation number (1/2/3/4): "))

        if op == 1:
            print(f"\nResult:  = {a + b}")
        elif op == 2:
            print(f"\nResult:  = {a - b}")
        elif op == 3:
            print(f"\nResult:  = {a * b}")
        elif op == 4:
            if b == 0:
                print("\nError: Cannot divide by zero.")
            else:
                print(f"\nResult:  = {a / b}")
        else:
            print("\nInvalid operation choice. Please select a number between 1 and 4.")

