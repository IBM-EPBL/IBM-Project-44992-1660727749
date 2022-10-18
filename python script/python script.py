import random
randfloat = random.uniform(0,1000)
print("Temperature =", randfloat)
if(randfloat>=60):
  print("Temperature is high")
randfloat1 = random.uniform(0,1000)
print("Humidity =", randfloat1)
if(randfloat1<=500):
  print("Humidity is low")

if(randfloat>=60) & (randfloat1<=500):
  print("Fire detected")
else:
   print("There is no fire detected")