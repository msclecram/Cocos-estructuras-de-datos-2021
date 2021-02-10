#include <iostream>
#include <list> 
#include <iterator> 
using namespace std;

int main()
{
    //we vave a limit number, wich means we can only print the odd numners between 1 and n
    int n;

    //we ask user for the number limit we want to search (and save it)
    cout << "type the max range to find prime numbers: ";
    cin >> n;

    //first, we make a list to keep the numbers
    list <int> oddNumbers;
    list <int>::iterator iterator;

    //we fill the list with the numbers from 1 to n 
    for (int i = 0; i < n; i++)
    {
        oddNumbers.push_back(i + 1); //the "i + 1" is to avoid having 0 at first and n-1 at the end
    }

    //we will make a forked for

    //the i stands for the number we will compare to find any residual values 
    //(starting at 2 because any odd can be divided by 1, and dividing it by 0 will crash it and well, no) 

    for (int i = 2; i < n; i++)
    {
        //we assing i's value to j so that we know we start with the same number i is equal to,
        //and we increase it i times to make a sort of multiplication
        //NOTE: the + 1 makes sure the limit of the search gets checked for any multiples
        for (int j = i; j < n + 1; j += i)
        {
            //j, being the number we are sort of multiplicating, if its in the list of numbers, remove it
            //if the number to remove was a prime number, it would't be equal to j, a muliple of i, would it?
            //EXEPTION: It's the same number
            if (!(j == i))
                oddNumbers.remove(j);
        }
        
    }
    
    //finally, we only say the lenght of the list, because all numbers that were divisible my more than two numbers,
    //1, and themselves, are already removed
    cout << "there are " << oddNumbers.size() << " prime numbers between 1 and " << n << endl; 

    iterator = oddNumbers.begin();

    for (int i = 0; i < oddNumbers.size() - 1; i++)
    {
        cout << *iterator << ", ";
        advance(iterator, 1);
    }

    cout << "and " << *iterator;
    return 0;
}