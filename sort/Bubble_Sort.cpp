#include<iostream>
#include<vector>

using namespace std;

// 升序
vector<double> Bubble_Sort(vector<double> &instance){
    int count = instance.size(); 
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count - i - 1; j++)
        {
            if (instance[j] > instance[j + 1])
            {
                double temp = instance[j];
                instance[j] = instance[j + 1];
                instance[j + 1] = temp;
            }
            
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