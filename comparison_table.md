# Performance Comparison

| Criteria | Max Heap | Linear Search |
|---|---|---|
| Highest score | 95 | 95 |
| Comparisons for given execution | 12 during insertion | 7 |
| Swaps | 7 | Not applicable |
| Find maximum | O(1) | O(n) |
| Insert a new score | O(log n) | O(1) to append |
| Find maximum after insertion | O(1) | O(n) |
| Extra space | O(n) | O(1) |
| Suitable for continuous maximum queries | Yes | Less efficient as n increases |

## Analysis

For the given 8 scores, Linear Search required 7 comparisons
to find the maximum once.

Max Heap required 12 comparisons and 7 swaps during the
insertion process. However, after the heap is constructed,
the maximum score is available at the root and can be retrieved
in O(1) time.

When new student scores are continuously added, Max Heap
maintains the highest score efficiently. Each insertion takes
O(log n), while retrieving the maximum takes O(1).

Linear Search requires O(n) time whenever the maximum needs
to be found again.

Therefore, the choice depends on the usage pattern. Linear
Search is simple for a single search on a small static dataset,
while Max Heap is useful for continuously maintaining and
retrieving the highest score.
