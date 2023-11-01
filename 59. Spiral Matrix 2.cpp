class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix (n, vector<int>(n));;
        int count = 1; 
        int total = n*n;

        //declaring index
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = n-1;

        while(count<=total){
            //for startingRow
            for(int index = startingCol ; count<=total && index <= endingCol ; index++){
                matrix[startingRow][index] = count;
                count++;
            }
            startingRow++;

            //for endingColumn
            for(int index = startingRow ; count<=total && index <= endingRow ; index++){
                matrix[index][endingCol] = count;
                count++;
            }
            endingCol--;

            //for endingRow
            for(int index = endingCol ; count<=total && index >= startingCol ; index--){
                matrix[endingRow][index] = count;
                count++;
            }
            endingRow--;

            //for startingColumn
            for(int index = endingRow ; count<=total && index >= startingRow ; index--){
                matrix[index][startingCol] = count;
                count++;
            }
            startingCol++;

        }
        return matrix;
    }
};
