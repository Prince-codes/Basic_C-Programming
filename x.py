import os
def create(n):
    for i in range (96,96+n+1):
        fname=f"program_{i}.c"
        with open(fname,"w") as f:
            f.write("// hello")
        
v=int(input("Enter no. of files : "))
create(v)