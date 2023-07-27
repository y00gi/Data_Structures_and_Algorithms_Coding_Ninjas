void helper(int n, vector<int>& arr, vector<vector<int>>& ans, vector<int>& temp, int index)
{
    ans.push_back(temp);
    if(index == n) return;

    int last = -1;
    for(int j = index; j<n; j++)
    {
        if(last != arr[j])
        {
            temp.push_back(arr[j]);
            helper(n, arr, ans, temp, index+1);
            last = arr[j];
            temp.pop_back();
        }
    }
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    // Write Your Code Here    
    vector<vector<int>> ans;
    int n = arr.size();
    vector<int> temp;

    helper(n, arr, ans, temp, 0);
    return ans;
}