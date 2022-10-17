import math            #Importing library for math operation

a=float(input("x1= "))  #getting x1
b=float(input("y1= "))  #getting y1
c=float(input("x2= "))  #getting x2
d=float(input("y2= "))  #getting y2
e=((c-a)**2)+((d-b)**2)   # Calculating (x2-x1)^2 +(y2-y1)^2
result=math.sqrt(e)    # Square root of calculated value
print("Distance is ",result)  # printing the result