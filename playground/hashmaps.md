# C++ `std::unordered_map` Syntax and Usage

`std::unordered_map` is a hash table-based implementation of a map provided by the C++ Standard Library. Here's a summary of its syntax and common operations:

## Declaration and Initialization

```cpp
#include <unordered_map>

std::unordered_map<KeyType, ValueType> map; // Default constructor
std::unordered_map<KeyType, ValueType> map = {{key1, value1}, {key2, value2}}; // Initialization with key-value pairs
```

## Insert
```cpp
map[key] = value; // Insert or update a value
map.insert({key, value}); // Insert a new key-value pair (does not update if key already exists)
```

## Update
```cpp
ValueType value = map[key]; // Access value associated with key (will create default value if key does not exist)
```

## Find
```cpp
auto it = map.find(key); // Finds and returns an iterator to the element, or end() if not found
if (it != map.end()) {
    // Element found
    ValueType value = it->second;
}
```

## Erase
```cpp
map.erase(key); // Removes element by key
map.erase(it);  // Removes element by iterator
```

## size
```cpp
size_t size = map.size(); // Number of elements
bool exists = map.count(key) > 0; // Check if key exists
```