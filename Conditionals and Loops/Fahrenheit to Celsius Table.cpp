#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int start, end, gap, celsius;
    cin >> start >> end >> gap;

    while(start<=end)
    {
        celsius = 5 * (start - 32)/9;
        cout << start << "\t" << celsius << endl;
        start+=gap;
    }


}