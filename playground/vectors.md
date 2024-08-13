# Using `std::vector` and Iterators in C++

`std::vector` is a dynamic array provided by the C++ Standard Library, which allows for efficient random access and dynamic resizing. Iterators are used to traverse and manipulate the elements within a `std::vector`.

## Declaration and Initialization

```cpp
#include <vector>

std::vector<Type> vec; // Default constructor (empty vector)
std::vector<Type> vec = {value1, value2, value3}; // Initialization with values
```

## Adding elements
```cpp
vec.push_back(value); // Add value to the end of the vector
vec.insert(vec.begin() + index, value); // Insert value at a specific position
```

## Accessing elements
```cpp
Type value = vec[index]; // Access element by index
Type value = vec.at(index); // Access with bounds checking
```

## Remove
```cpp
vec.pop_back(); // Remove the last element
vec.erase(vec.begin() + index); // Remove element at a specific position
vec.clear(); // Remove all elements
```

## Iteration
```cpp
for (const auto& element : vec) {
    // Use element
}
```
or
```cpp
#include <vector>

std::vector<Type>::iterator it;
for (it = vec.begin(); it != vec.end(); ++it) {
    // Use *it to access the element
}
```

## Reverse iterators
```cpp
for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
    // Use *it to access the element in reverse order
}
```

## Size
```cpp
size_t size = vec.size(); // Number of elements
size_t capacity = vec.capacity(); // Capacity of the vector
```


