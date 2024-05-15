#include <functional>
#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {
  // use min-heap to keep track of k largest element
  std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
  for (int value : values) {
    minHeap.push(value);
    if (minHeap.size() > k) {
      minHeap.pop();  // remove the smallest element
    }
  }
  // the root of the heap is the k-th largest element
  return minHeap.top();
}