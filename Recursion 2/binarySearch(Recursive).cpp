// input - input array
// size - length of input array
// element - value to be searched
int helper(int input[], int start, int end, int element)
{
    if(end < start) return -1;
    int mid = (start + end)/2;

    if(input[mid] == element) return mid;
    else if(element < input[mid]) return helper(input, start, mid-1, element);
    else if(element > input[mid]) return helper(input, mid+1, end, element);

    return -1;
}

int binarySearch(int input[], int size, int element) {
    // Write your code here

    return helper(input, 0, size, element);

}
