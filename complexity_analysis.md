# Complexity Analysis

## 1. Max Heap

### Insertion

In a Max Heap, a new score is inserted at the end and may move upward to restore the heap property.

- Best Case: O(1)
- Average Case: O(log n)
- Worst Case: O(log n)

### Finding Maximum

The maximum element is always stored at the root of the Max Heap.

- Time Complexity: O(1)

### Space Complexity

The heap stores all n student scores.

- Space Complexity: O(n)

---

## 2. Linear Search

Linear Search checks each score to find the highest score.

For n scores, the algorithm performs n - 1 comparisons.

For the given input:

n = 8

Comparisons = 8 - 1 = 7

### Time Complexity

- Best Case: O(n)
- Average Case: O(n)
- Worst Case: O(n)

### Space Complexity

The algorithm uses only a constant amount of extra memory.

- Extra Space Complexity: O(1)

---

## 3. Execution Results

### Max Heap

- Highest Score = 95
- Total Insertion Comparisons = 12
- Total Insertion Swaps = 7
- Maximum Retrieval = O(1)

### Linear Search

- Highest Score = 95
- Comparisons = 7
