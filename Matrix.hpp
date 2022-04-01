#include<iostream>
#include <vector>
using namespace std;
namespace zich{
    class Matrix{

        private: 
        vector<vector<double> > matrix;
        int rows;
        int cols;

        public:
        Matrix();
        Matrix(vector<double> v, int rows, int cols);
        Matrix operator+ (Matrix &m);
        Matrix operator+= (int num);
        Matrix operator+ ();
        Matrix operator- (Matrix &m);
        Matrix operator-= (Matrix &m);
        Matrix operator- ();
        bool operator>(Matrix &m);
        bool operator>=(Matrix &m);
        bool operator<(Matrix &m);
        bool operator<=(Matrix &m);
        bool operator==(Matrix &m);
        bool operator!=(Matrix &m);
        // friend Matrix operator- (Matrix &m, int num);
        // friend Matrix operator+ (Matrix &m, int num);
        Matrix operator++ ();
        Matrix operator++ (int num);
        Matrix operator-- ();
        Matrix operator-- (int num); 
        friend Matrix operator*(int num, Matrix &m);
        Matrix operator*(Matrix m);
        friend Matrix operator*=(Matrix &m, int num);
        friend ostream& operator<<(ostream& os, Matrix m);
        friend istream& operator>>(istream  &input, Matrix m);
    };
}