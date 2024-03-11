"""
Functions that calculate two types of interest.
"""

def simple_interest(principal: float,rate: float,time:float) -> float:
    return # return stuff here

def compound_interest(principal: float, rate: float, n: int, time: float) -> float:
    return # return stuff here

# Example values
p,r,t = 100,6,2
print("Calculate simple interest with the following values:")
print(f"P: {p}, r: {r}, t: {t}")
print(simple_interest(p,r,t))
# value outputted should be 12.0

# Example values
p,r,t,n = 100,6,2,12
print("Calculate compound interest with the following values:")
print(f"P: {p}, r: {r}, t: {t}, n: {n}")
print(compound_interest(p,r,n,t))
# value outputted should be 112.7159776...
