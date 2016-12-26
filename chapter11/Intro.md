## HashTables
1. Average time to search for an element is O(1) and worst case is \theta(n).
2. Chaining a way to handle collisions.
3. Direct address tables.
4. Implementation mostly as an array.
5. Vector philosophy of memory allocation.
6. Hash collisions.
	1. Use better hash functions.
	2. Chaining.

## Good Hash functions.
1. A good hash function satisfies the assumption that every key is equally likely to hash to any of the m slots, independently of where any other key has hashed to.
2. A good approach derives the hash value in a way that we expect to be independent of any patterns that might exist in the data.

## Universal Hashing
1. Randomly choose a hash function from a family of hash functions.
2. ((ak+b)mod p)mod m

## Perfect Hashing
1. Two levels of hashing.
