class Solution {
  public:


    int merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right) {
        int i = left;        
        int j = mid + 1;     
        int k = left;        
        int invCount = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                
                
                invCount += (mid - i + 1);
            }
        }

        
        while (i <= mid)
            temp[k++] = arr[i++];

        while (j <= right)
            temp[k++] = arr[j++];

        
        for (int idx = left; idx <= right; idx++)
            arr[idx] = temp[idx];

        return invCount;
    }

    int mergeSort(vector<int> &arr, vector<int> &temp, int left, int right) {
        int invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            invCount += mergeSort(arr, temp, left, mid);
            invCount += mergeSort(arr, temp, mid + 1, right);
            invCount += merge(arr, temp, left, mid, right);
        }
        return invCount;
    }

    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        vector<int> temp(n);
        return mergeSort(arr, temp, 0, n - 1);
    }
};
