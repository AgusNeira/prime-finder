# Prime finder

Small utility for finding prime numbers. Initially checks if given numbers are prime.

## Usage

### Check
```
prime-finder check <a_number> [<anoter_one> <more_numbers>...]
```
Returns only the prime numbers from the given list, separated by spaces

### Interval
```
prime-finder interval <lower_bound> <upper_bound>
```

Finds the prime numbers within a given interval, and prints them out separated by spaces

### From
```
prime-finder from <number> bigger|smaller|closer [<quantity>]
```

Searches for a prime number from a specified number, inclusively. Depending on the second argument, the search moves upward, downward or in both directions from the target number. If the quantity argument isn't specified, the command looks for the closest prime in the specified direction and prints it out. Establishing the quantity allows for looking the *n* closest primes, always in the specified direction.