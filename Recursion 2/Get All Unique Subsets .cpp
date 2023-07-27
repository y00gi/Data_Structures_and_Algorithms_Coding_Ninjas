void findSubsets(int index, vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans)
{
    ans.push_back(temp);

    for(int i = index; i<(int)arr.size(); ++i)
    {
        if(i != index && arr[i] == arr[i-1]) continue;

        temp.push_back(arr[i]);
        findSubsets(i + 1, arr, temp, ans);
        temp.pop_back();
    }
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    // Write Your Code Here    
    vector<vector<int>> ans;
    vector<int> temp;

    findSubsets(0, arr, temp, ans);
    return ans;
}