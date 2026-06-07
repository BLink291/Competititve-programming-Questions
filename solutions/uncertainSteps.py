


def num_of_ways_to_reach_ground(n):
    dp = [0] * (n + 1)
    dp[n] = 1  # Base case: There is one way to be on the ground
    dp[n-1] = 1  # Base case: There is one way to reach to ground from the last step
    MOD = 10 ** 9 + 7
    for i in range(n - 2, -1, -1):
        dp[i] = ( dp[i + 1] + dp[i + 2] ) % MOD
    
    dp_s = [0] * (n + 1)
    dp_s[0] = 1  # Base case: There is one way to be on this step
    dp_s[1] = 1  # Base case: There is one way to be on this step
    for i in range(2, n + 1):
        dp_s[i] = (dp_s[i - 1] + dp_s[i - 2]) % MOD

    ans = dp[0]  # Number of ways to reach the ground from the start when onlt taking 1 or 2 steps at a time

    # if we can only take 3 step at once we can check if we can take 3 step from this position
    # and add the number of ways to reach the ground from that position * number of ways to reach that position from the start
    for i in range(n - 3, -1, -1):
        ans = (ans + (dp_s[i] * dp[i + 3]) % MOD) % MOD



    return ans
