# Directions: Interest Calculator
Remember that there are two types of interest - simple interest and compound interest. For this assignment, you'll need to create a function to calculate each.

## Simple Interest
Simple interest is calculated as $I = P \times \frac{R}{100} \times T$ where $P$ is the principal, $R$ is the interest rate, and $T$ is the amount of time.

## Compound Interest
Compound interest is when interest is earned on previously earned interest. It's formula is given by $A = P(1 + \frac{\frac{r}{100}}{n})^{nt}$ where $A$ is the final amount, $P$ is the intial principal, $r$ is the interest rate, $n$ is the number of times compounded during a single time period, and $t$ is the number of time periods.

## Bonus
Choose one or more for bonus:
1. Add error checking. If a user enters an inappropriate or invalid value for one of the variables, cease the computation and explain the issue.
2. Add prompts to ask the user for the type of interest to be calculated and then the appropriate values for the variables.
3. We can use the compounding interest formula to approximate Euler's number, *e*, approximately 2.71828... This can be done by setting $p = 1$, $t = 1$, $r = 1$, and then varying $n$. Show how we can calculate $e$ by manipulating $n$.
