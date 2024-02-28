# Write to a file
# 'w' - write
with open('example.txt','w') as file:
    file.write("Hello, world!\n")
    file.write("This is a Python file manipulation example.\n")


# Read from a file
# 'r' - read
with open('example.txt','r') as file:
    content = file.readlines() # Reads ALL of the lines from a file
    print(content)

# Read EACH line from a file
with open('example.txt','r') as file:
    for line in file:
        print(line)


