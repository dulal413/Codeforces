def fib(n):
  if n <= 1:
    return n
  return fib(n-1) + fib(n-2)

def fib2(n):
  if n <= 1:
    return n
  dp = [0] * (n+1)
  dp[1] = 1
  for i in range(2 , n+1):
    dp[i] = dp[i-1] + dp[i-2]

print(fib(10))
