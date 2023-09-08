# C - Hash tables

* A hash function is a function that maps a key to a number within a given range
* A good hash function is fast, has minimum duplicate returns (spreads the data evenly)
* A hash table is an effecient data structure that stores key/value pairs such that the retrieval operations happen at almost constant time and if the base array fills up, no extra memory will be necessary
* How do they work? We have a base array. In each index there is a potential linked list. Given a key/value pair, use key to get an index (within range of array) and store the node[key, value, next] in that index in array
* To use a hash table: ```add(key, val)``` | ```del(key)``` |  ```get(key)```
* A collision occurs when different keys map to the same index in the base array.
* The main ways of dealing with collisions in the context of a hash tables are: using auxilliary data structure and probing to find empty slots
* The advantages are: efficiency in space and time
* Drawbacks of using hash tables: poor hashing function means high collisions which translates to time inefficieny
* Most common use cases of hash tables are caching and database indexing
