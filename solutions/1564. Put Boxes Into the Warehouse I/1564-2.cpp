class Solution {
 public:
  int maxBoxesInWarehouse(vector<int>& boxes, vector<int>& warehouse) {
    int i = 0;  // warehouse's index

    sort(boxes.rbegin(), boxes.rend());

    for (const int box : boxes)
      if (i < warehouse.size() && warehouse[i] >= box)
        ++i;

    return i;
  }
};
