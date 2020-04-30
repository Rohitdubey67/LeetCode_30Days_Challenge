/*
You have a queue of integers, you need to retrieve the first unique integer in the queue.

Implement the FirstUnique class:

FirstUnique(int[] nums) Initializes the object with the numbers in the queue.
int showFirstUnique() returns the value of the first unique integer of the queue, and returns -1 if there is no such integer.
void add(int value) insert value to the queue.
 */
 
 class FirstUnique {
public:
    unordered_map<int,int>m;
    vector<int>v;
    int p=0;
    FirstUnique(vector<int>&a) {
        for(int i=0;i<a.size();i++)
        {
            v.push_back(a[i]);
            m[v[i]]++;
        }
    }
    
    int showFirstUnique() {
        for(;p<v.size();p++)
        {
            if(m[v[p]]==1)
                return v[p];
        }
        return -1;
    }
    
    void add(int k) {
        v.push_back(k);
        m[k]++;
    }
};
