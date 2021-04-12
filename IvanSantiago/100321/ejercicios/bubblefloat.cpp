#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

#define N 10
#define M 15

//int A[N];
//int B[M]; 
class coordenada
{
    public:
    float x;
    float y;
};

bool operator < (const coordenada& a, const coordenada& b)
{
    if (a.x < b.x || (a.x == b.x && a.y < b.y))
    {
        return true;
    }
    return false;
}


template <typename T>
void bubbleSort(T *array, int n)
{
    for (int r = 0; r < N; r++)
    {
        bool isSorted = true;
        for (int c = 0; c < N - 1; c++)
        {
            if (array[c+1] < array[c])
            {
                T temp = array[c];
                array[c] = array[c + 1];
                array[c + 1] = temp;
                isSorted = false;

            }
        }
        if (isSorted)
        {
            break;
        }
    }
}


int main()
{
    coordenada c[N];   
    for (int r = 0; r < N; r++)
    {
        c[r].x = rand()%M;
        c[r].y = rand()%M;
    }

    bubbleSort(c, N); 
    cout << "\n"; 
    for (int r = 0; r < N; r++)
    {
        cout << c[r].x << ", " << c[r].y << endl;
    }

    cout << "\n";
    //cout << A[0] << " " << A[N - 1] << " ";

    return 0;
}