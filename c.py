def maximize_product(x, y):
    # Convert integers to lists of digits
    x_digits = [int(d) for d in str(x)]
    y_digits = [int(d) for d in str(y)]

    # Sort digits in non-decreasing order for x and non-increasing order for y
    x_digits.sort()
    y_digits.sort(reverse=True)

    # Convert lists of digits back to integers
    x_maximized = int(''.join(map(str, x_digits)))
    y_maximized = int(''.join(map(str, y_digits)))

    return x_maximized, y_maximized

# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Read the two numbers
    x = int(input())
    y = int(input())

    # Maximize the product of x and y
    x_maximized, y_maximized = maximize_product(x, y)

    # Print the maximized numbers
    print(x_maximized)
    print(y_maximized)

