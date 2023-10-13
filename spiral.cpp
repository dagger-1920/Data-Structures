#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans;
    int row=matrix.size();
    int col=matrix[0].size();

    int count=0;
    int total=row*col;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;


    while(count < total){
        //printing starting row
        for(int index=0; count<total && index<=endingRow; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //printing ending coloumn
        for(int index=startingRow;count<total && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending Row
        for(int index=endingCol; count<total && index>=startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting Coloumn
        for(int index= endingRow;count<total && index >= startingRow; index++){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;

    }
    for(int i:ans)
        cout<<i<<" ";    
}

