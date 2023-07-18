/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * @input C : Integer array
 * @input n3 : Integer array's ( C ) length
 * 
 * @Output Integer
 */
#include <algorithm>
#include <iostream>
using namespace std;

int minAbsoluteDIfference(int* A, int n1, int* B, int n2, int* C, int n3) {
    int minN = min(n1,min(n2,n3));
    int a = 0, b = 0, c = 0;
    int minDifference = INT_MAX;
    while(a < n1 && b < n2 && c < n3){
        int maxElement = max(A[a],max(B[b],C[c]));
        int minElement = min(A[a],min(B[b],C[c]));
        if(minElement == A[a]) ++a;
        else if(minElement == B[b]) ++b;
        else ++c;
        minDifference = min(minDifference,maxElement - minElement);
}   
return minDifference;
}

int main() {
    int A[] = {1,4,5,8,10};
    int B[] = {6,9,15};
    int C[] = {2,3,6,6};
    cout << minAbsoluteDIfference(A,5,B,3,C,4);
    return 0;
}
