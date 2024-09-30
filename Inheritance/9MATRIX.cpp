#include <iostream>

using namespace std;

class Matrix 
{
private:
    int* data;
    int size;

public:
   
    Matrix(int s) : size(s) 
	{
        data = new int[size];
    }

   
    Matrix(const Matrix& other) : size(other.size) 
	{
        data = new int[size];
        for (int i = 0; i < size; ++i) 
		{
            data[i] = other.data[i];
        }
    }

   
    Matrix& operator=(const Matrix& other) 
	{
        if (this != &other) 
		{
            delete[] data;
            size = other.size;
            data = new int[size];
            for (int i = 0; i < size; ++i) 
			{
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    
    Matrix operator+(const Matrix& other) 
	{
        Matrix result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }

    
    void input() 
	{
        for (int i = 0; i < size; ++i) 
		{
            cout << "\n\n\t Enter element " << i + 1 << ": ";
            cin >> data[i];
        }
    }

   
    void print() const 
	{
        for (int i = 0; i < size; ++i) 
		{
            cout << data[i] << " ";
        }
        cout << endl;
    }

    
    ~Matrix() 
	{
        delete[] data;
    }
};

int main() 
{
    int size;
    cout << "\n\n\t Enter the size of the matrices: ";
    cin >> size;

    Matrix mat1(size);
    Matrix mat2(size);

    cout << "\n\n\t Enter elements for the first matrix:" ;
    mat1.input();

    cout << "\n\n\t Enter elements for the second matrix:" ;
    mat2.input();

    Matrix result = mat1 + mat2;

    cout << "\n\n\t Resultant matrix after addition:" ;
    result.print();

    return 0;
}

