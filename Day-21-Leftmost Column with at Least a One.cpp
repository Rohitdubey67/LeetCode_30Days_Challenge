/*
A binary matrix means that all elements are 0 or 1. For each individual row of the matrix, this row is sorted in non-decreasing order.

Given a row-sorted binary matrix binaryMatrix, return leftmost column index(0-indexed) with at least a 1 in it. If such index doesn't exist, return -1.

You can't access the Binary Matrix directly.  You may only access the matrix using a BinaryMatrix interface:

BinaryMatrix.get(row, col) returns the element of the matrix at index (row, col) (0-indexed).
BinaryMatrix.dimensions() returns a list of 2 elements [rows, cols], which means the matrix is rows * cols.
Submissions making more than 1000 calls to BinaryMatrix.get will be judged Wrong Answer.  Also, any solutions that attempt to circumvent the judge will result in disqualification.

For custom testing purposes you're given the binary matrix mat as input in the following four examples. You will not have access the binary matrix directly.
*/
class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &b) {
        int i=0,k,p=-1,m,j;
        vector<int>v=b.dimensions();
        j=v[1]-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            k=0;
            for(m=0;m<v[0];m++)
            {
               if(b.get(m,mid)==1)
               {
                   k=1;
                   break;
               }
            }
            if(k==1)
            {
                j=mid-1;
                p=mid;
            }
            else
                i=mid+1;
        }
         return p;
    }
};
