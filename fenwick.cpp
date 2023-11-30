#include<iostream>
#include<vector>
using namespace std;

class FW
{
private:
    vector<int> arr;
    int len;
public:
    FW(int size)
    {
        arr.assign(size+10,0);
        len = size;
    }

    ////

    void update(int idx,int num)
    {
        while(idx<=len)
        {
            arr[idx] += num;
            idx += idx & -idx;
        }
        cout << num << endl;
    }

    int query(int idx)
    {
        int sum=0;
        while(idx > 0)
        {
            sum += arr[idx];
            idx -= idx & -idx;
        }
        return sum;
    }


};

int main()
{
    FW fenwick(10);

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 1; i<= 10;i++)
    {
        fenwick.update(i,arr[i-1]);
    }
    cout << fenwick.query(10) - fenwick.query(5);

}