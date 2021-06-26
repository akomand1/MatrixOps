#ifndef MATRIXOPS_H
#define MATRIXOPS_H

#include <vector>
#include <limits.h>


using namespace std;

class Matrix
{
    private:
        vector<vector<int>> matrix;
    public:
        Matrix(vector<vector<int>>);
        vector<vector<int>> getMatrix();
        Matrix matMul(Matrix);
        bool isEquals(Matrix);
        friend Matrix operator*(Matrix& obj1, Matrix& obj2);
        friend bool operator==(Matrix& obj1, Matrix& obj2);
        void transpose();
        void printMatrix();
};

Matrix::Matrix(vector<vector<int>> matrix)
{
    this->matrix= matrix;
}

vector<vector<int>> Matrix::getMatrix()
{
    return this->matrix;
}

void Matrix::transpose()
{
    int rows = this->matrix.size();
    int cols = this->matrix[0].size();

    if(rows == 0 and cols == 0)
    {
        cout<<"Incorrect matrix dimensions"<<endl;
        return;
    }
    vector<vector<int>> returnMatrix(cols, vector<int>(rows, 0));
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            returnMatrix[j][i] = this->matrix[i][j];
        }
    }
    this->matrix= returnMatrix;
}

void Matrix::printMatrix()
{
    vector<vector<int>> mat = this->getMatrix();
    for(int  i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[0].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool operator==(Matrix& obj1, Matrix& obj2)
{
    vector<vector<int>> mat1 = obj1.getMatrix();
    vector<vector<int>> mat2 = obj2.getMatrix();

    int row1 = mat1.size(), col1 = mat1[0].size();
    int row2 = mat2.size(), col2 = mat2[0].size();

    if(row1 != row2 || col1 != col2)
    {
        return false;
    }
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            if(mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    return true;
}

bool Matrix::isEquals(Matrix obj)
{
    vector<vector<int>> mat1 = this->getMatrix();
    vector<vector<int>> mat2 = obj.getMatrix();

    int row1 = mat1.size(), col1 = mat1[0].size();
    int row2 = mat2.size(), col2 = mat2[0].size();

    if(row1 != row2 || col1 != col2)
    {
        return false;
    }
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            if(mat1[i][j] != mat2[i][j])
                return false;
        }
    }
    return true;
}

Matrix ERROR_MATRIX({{INT_MIN},{INT_MIN}});

Matrix operator*(Matrix& obj1, Matrix& obj2)
{
    vector<vector<int>> mat1 = obj1.getMatrix();
    vector<vector<int>> mat2 = obj2.getMatrix();

    int row1 = mat1.size(), col1 = mat1[0].size(), row2 = mat2.size(), col2 = mat2[0].size();
    if(col1 != row2)
    {
        return ERROR_MATRIX;
    }
    vector<vector<int>> resultMatrix(row1, vector<int>(col2, 0));
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            for(int k = 0; k < col1; k++)
            {
                resultMatrix[i][j] += (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    Matrix ret(resultMatrix);
    return ret;

}
Matrix Matrix::matMul(Matrix obj)
{
    vector<vector<int>> mat1 = this->getMatrix();
    vector<vector<int>> mat2 = obj.getMatrix();

    int row1 = mat1.size(), col1 = mat1[0].size(), row2 = mat2.size(), col2 = mat2[0].size();
    if(col1 != row2)
    {
        return ERROR_MATRIX;
    }
    vector<vector<int>> resultMatrix(row1, vector<int>(col2, 0));
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            for(int k = 0; k < col1; k++)
            {
                resultMatrix[i][j] += (mat1[i][k]*mat2[k][j]);
            }
        }
    }
    Matrix ret(resultMatrix);
    return ret;
}

#endif
