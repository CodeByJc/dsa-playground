def good_sum(N, arr):
    stack = []
    
    for num in arr:
        if num >= 0:
            stack.append(num)  # Push positive numbers
        else:
            needed = -num  # Convert negative to absolute
            sum_removed = 0
            
            # Remove minimum required elements from stack
            while stack and sum_removed < needed:
                sum_removed += stack.pop()
            
            # Push the absolute value of the negative number
            stack.append(abs(num))
    
    return sum(stack)

# Input handling
N = int(input())  # Read number of elements
arr = list(map(int, input().split()))  # Read array elements

print(good_sum(N, arr))
