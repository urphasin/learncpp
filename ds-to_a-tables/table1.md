# Algorithm to Data Structures Reference Table

| Algorithm | Python Data Structures | C++ Data Structures | Java Data Structures |
|-----------|------------------------|---------------------|---------------------|
| **Merge Sort** | `list` (for array splitting/merging), `collections.deque` (for iterative merging) | `std::vector` (dynamic array for sorting), `std::list` (for linked-list merge sort) | `ArrayList` (dynamic array), `int[]` (fixed array), `LinkedList` (for linked-list merge sort) |
| **Quick Sort** | `list` (in-place partitioning), `collections.deque` (iterative version with stack) | `std::vector` (in-place partitioning), `std::array` (fixed-size array) | `ArrayList` (in-place), `int[]` (fixed array), `ArrayDeque` (iterative stack) |
| **Binary Search** | `list` (sorted array), `bisect` module (binary search utilities) | `std::vector` (sorted), `std::array`, `std::set` (self-balancing BST) | `ArrayList` (sorted), `int[]`, `TreeSet` (self-balancing BST) |
| **Depth-First Search (DFS)** | `list` (adjacency list), `set` (visited nodes), `collections.deque` (stack for iterative DFS) | `std::vector` (adjacency list), `std::unordered_set` (visited), `std::stack` (iterative) | `ArrayList` (adjacency list), `HashSet` (visited), `Stack` or `ArrayDeque` (iterative) |
| **Breadth-First Search (BFS)** | `list` (adjacency list), `set` (visited), `collections.deque` (queue) | `std::vector` (adjacency list), `std::unordered_set` (visited), `std::queue` | `ArrayList` (adjacency list), `HashSet` (visited), `LinkedList` or `ArrayDeque` (queue) |
| **Dijkstra's Algorithm** | `list` (adjacency list), `heapq` (min-heap for priority queue), `dict` (distances), `set` (visited) | `std::vector` (adjacency list), `std::priority_queue` (max-heap by default, need custom comparator for min-heap), `std::unordered_map` (distances), `std::unordered_set` (visited) | `ArrayList` (adjacency list), `PriorityQueue` (min-heap), `HashMap` (distances), `HashSet` (visited) |
| **Prim's Algorithm (MST)** | `list` (adjacency list), `heapq` (min-heap for edges), `set` (visited), `dict` (key values) | `std::vector` (adjacency list), `std::priority_queue` (with custom comparator), `std::unordered_set` (visited), `std::unordered_map` (key values) | `ArrayList` (adjacency list), `PriorityQueue` (min-heap), `HashSet` (visited), `HashMap` (key values) |
| **Knapsack Problem (0/1)** | `list` (2D or 1D DP table), `tuple` or `namedtuple` (item weights/values) | `std::vector<std::vector<int>>` (2D DP table) or `std::vector<int>` (1D), `std::pair` or `struct` (items) | `int[][]` or `ArrayList<ArrayList<Integer>>` (DP table), `List<int[]>` or custom class (items) |
| **Hash Table Frequency Counting** | `dict` (hash map), `collections.Counter` (specialized multiset) | `std::unordered_map` (hash map), `std::map` (if ordered counts needed) | `HashMap` (hash map), `TreeMap` (if ordered counts needed) |

## Key Corrections Made

### 1. **Binary Search - Python**
- **Original**: `collections.OrderedDict` (if key-value pairs)
- **Corrected**: `bisect` module (binary search utilities)
- **Reason**: `collections.OrderedDict` doesn't provide binary search functionality. Python's `bisect` module is specifically designed for binary search operations on sorted lists.

### 2. **Dijkstra's Algorithm - C++**
- **Original**: `std::map` or `std::unordered_map` (distances), `std::set` (visited)
- **Corrected**: `std::unordered_map` (distances), `std::unordered_set` (visited)
- **Reason**: For better performance, hash-based containers (`std::unordered_map`, `std::unordered_set`) are preferred over tree-based ones (`std::map`, `std::set`) unless ordering is specifically required.

### 3. **C++ Priority Queue Clarification**
- **Added Note**: `std::priority_queue` is a max-heap by default and needs a custom comparator for min-heap behavior required by Dijkstra's and Prim's algorithms.

### 4. **DFS - C++**
- **Original**: `std::set` (visited)
- **Corrected**: `std::unordered_set` (visited)
- **Reason**: Hash-based set provides O(1) average case lookup vs O(log n) for `std::set`.

### 5. **Hash Table Frequency Counting - C++**
- **Original**: `std::multiset` (if ordered counts needed)
- **Corrected**: `std::map` (if ordered counts needed)
- **Reason**: `std::multiset` stores multiple copies of keys, not key-count pairs. `std::map<Key, int>` is the correct structure for frequency counting with ordering.

## Additional Important Notes

### Python Data Structure Strengths
- **`collections.defaultdict`**: Excellent for graph adjacency lists (auto-initializes empty lists)
- **`collections.deque`**: Optimal for both stacks and queues with O(1) operations at both ends
- **`heapq`**: Min-heap implementation, efficient for priority-based algorithms
- **`bisect`**: Binary search utilities often overlooked but very useful

### C++ STL Performance Considerations
- Prefer `std::unordered_*` containers over `std::*` (tree-based) when ordering isn't required
- `std::priority_queue` requires careful handling of comparators for min-heap behavior
- `std::vector` vs `std::array`: Use `std::array` for compile-time known sizes, `std::vector` for dynamic sizing

### Java Collections Framework
- `ArrayDeque` is generally preferred over `LinkedList` for queue operations due to better cache locality
- `HashMap` provides O(1) average case operations, `TreeMap` provides O(log n) with ordering
- Consider `ArrayList` vs arrays: `ArrayList` for dynamic sizing, arrays for fixed-size performance-critical code

The corrected table now provides more accurate and practical data structure recommendations for each algorithm across all three languages.

The table has been corrected with several important adjustments. The main issues were:

1. **Python Binary Search**: The original mentioned `collections.OrderedDict` which doesn't provide binary search. I corrected this to the `bisect` module, which is Python's dedicated binary search utility.

2. **C++ Container Choices**: Updated several entries to use hash-based containers (`std::unordered_map`, `std::unordered_set`) instead of tree-based ones for better average-case performance when ordering isn't required.

3. **C++ Priority Queue**: Added clarification that `std::priority_queue` is a max-heap by default and requires custom comparators for min-heap behavior needed in Dijkstra's and Prim's algorithms.

4. **Frequency Counting**: Corrected C++ recommendation from `std::multiset` to `std::map<Key, int>` since multisets store multiple copies of elements rather than key-count pairs.

The corrected table now provides more accurate and practical recommendations. Your original analysis about Python's data structures being more powerful than they initially appear is spot-on — Python's high-level abstractions like `heapq`, `bisect`, and `collections` modules provide sophisticated functionality that might require multiple data structures in other languages.
