# Prime finder

Small utility for finding prime numbers. Initially checks if given numbers are prime.

## Usage

### Check
```
prime-finder check <a_number> [<anoter_one> <more_numbers>...]
```
Returns only the prime numbers from the given list, separated by spaces

### Find

```
prime-finder find <interval> [<limit>]
```

Finds prime numbers between the specified interval. The interval's syntax consists of two numbers separated by a hyphen. For example, 10-20 is a valid interval. One of the bounds may be omitted, in which case the limit must be specified. Either if both bounds or only the lower one are given, the algorithm finds numbers from the lower bound, upwards until either the limit or the upper bound are reached. However, if only the upper boud is specified the search starts from this one downwards.
Here are some valid examples:
```
prime-finder find 10-100		# Finds all the prime numbers between 10 and 100 (inclusive)
prime-finder find 128- 1		# Finds the first prime bigger than 128
prime-finder find -1000 5		# Finds the biggest five primes lower than 1000
```