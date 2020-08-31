#include<iostream>
#include<vector>

using namespace std;

// 升序
vector<double> Bubble_Sort(vector<double> &instance){
    int count = instance.size(); 
    for (size_t i = 0; i < count - 1; i++)
    {
        double max = -1;
        int index = -1;
        for (size_t j = 0; j < count - i; j++)
        {   
            if (instance[j] > max)
            {
                max = instance[j];
                index = j;
            }
        }
        if (index != -1)
        {
            double temp = instance[index];
            instance[index] = instance[count - i - 1];
            instance[count - i - 1] = temp; 
        }
    }
    return instance;
}

int main()
{
    vector<double> test;
    for (size_t i = 0; i < 10; i++)
    {
        double temp;
        cin >> temp;
        test.push_back(temp);
    }
    cout << test.size() << endl;
    Bubble_Sort(test);

    for (size_t i = 0; i < 10; i++)
    {
        cout << test[i] << " ";
        }
    return 0;
}