#include "Matrix.hpp"
#include <iostream>
#include <stdexcept>
using namespace zich;
using namespace std;

Matrix Matrix::operator+(Matrix &m){
    return Matrix();
}

Matrix Matrix::operator+=(int num){
    return Matrix();  
}

Matrix Matrix::operator+(){
    return Matrix();
}

Matrix operator+ (Matrix &m, int num){
    return Matrix();
}

Matrix Matrix::operator- (Matrix &m){
    return Matrix();
}
Matrix Matrix::operator-= (Matrix &m){
    return Matrix();
}
Matrix operator- (Matrix &m, int num){
    return Matrix();
}
Matrix Matrix::operator- (){
    return Matrix();
}

Matrix Matrix::operator++ (){
    return Matrix();
}
Matrix Matrix::operator++ (int num){
    return Matrix();
}
Matrix Matrix::operator-- (){
    return Matrix();
}
Matrix Matrix::operator-- (int num){
    return Matrix();
}
Matrix operator*(int num, Matrix &m){
    return Matrix();
}
Matrix Matrix::operator*(Matrix m){
    return Matrix();
}
Matrix operator*=(Matrix &m, int num){
    return Matrix();
}
ostream& operator<<(ostream& os, Matrix m){
    return os;
}
istream& operator>>(istream  &input, Matrix m){
    return input;
}

int main(){
    return 0;
}