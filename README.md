# Prime finder

Small utility for finding prime numbers. Initially checks if given numbers are prime.

## Usage

### Check
```
prime-finder check <a_number> [<anoter_one> <more_numbers>...]
```

Check for the given numbers and prints out only the ones that are primes, separated by spaces.

### Interval
```
prime-finder interval <lower_bound> <upper_bound>
```

Finds all the prime numbers within a given interval, and prints them out separated by spaces

### From
```
prime-finder from <target> bigger|smaller|closer [<quantity>]
```

Searches for primes from a specified `target`, inclusively. Depending on the second argument, the search moves upward, downward or in both directions from the target number. If the quantity argument isn't specified, the command looks for one prime in the specified direction and prints it out. Establishing the quantity allows for looking the *n* closest primes, always in the specified direction.
It's worth noting that `closer` searching prioritizes the bigger prime when the distance between two primes and the target is equal. For example, `prime-finder from 20 closer 3` will print out `19 23 17`: notice the 23 comes before the 17.