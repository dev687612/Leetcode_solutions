#include <bits/stdc++.h>
using namespace std;

void vectorLearn()
{
    vector<int> v;     // dynamic size
    v.push_back(1);    //  have an existing temporary object that you want to move into your std::vector
    v.emplace_back(2); //  create new temporary obj

    // pair
    vector<pair<int, int>> vec;
    vec.push_back({12, 45});
    vec.emplace_back(12, 45);

    // size define
    vector<int> vect1(5, 100); //{100,100,100,100,100}
    // copy
    vector<int> vect2(vect1);

    // iterator
    vector<int>::iterator it = v.begin(); // it is an object that points to an element inside the container

    it++;
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator it = v.end(); // {{100,100,100,100,100} , pointing to that address}

    // looping
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it : v)
    {
        cout << it << endl;
    }

    // deletion
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 1, v.begin() + 3);
    //{34,657,46,89,234} --> {46,89,234}

    vector<int> v(2, 58);
    v.insert(v.begin(), 10);
    //{58,58} ---> {10,58,58};

    v.insert(v.begin() + 1, 3, 699);
    //{58,58} ---> {58,699,699,699,58}

    v.size();
    v.pop_back();
    v.clear();
    v.empty();
}

void listLearn()
{
}
void dequeLearn()
{
}

void stackLearn()
{
    stack<int> st;
    st.push(4);
    st.push(6);
    st.push(9);
    st.push(2);
    st.emplace(7);

    cout << "stack is LIFO Structure  tc --> O(1) " << endl;
    // st---> 4,6,9,2,7
    cout << st.top() << endl; // 4
    st.pop();                 // 4
    cout << st.size();
    cout << st.empty(); // false
}

void queueLearn()
{
    // tc --> O(1)

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    q.front(); // 1
    q.back();  // 5
    q.pop();   // delete 1
}
void priorityQueueLearn()
{

    // TC-- > push log(n);
    //        pop log(n);
    //        top O(1);

    priority_queue<int> pq;
    // MAX HEAP
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(6);
    // 6(max ele) 5 4 3 2 1
    pq.top(); // 6
    pq.pop(); // 6

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(4);
    // 1(min ele) 2 3 4
    pq.top(); // 1
    pq.pop(); // 1
}

void setLearn()
{
    // set --> sorted and unique TC--> log(n)
    set<int> st;
    st.insert(1);
    st.insert(1); // it will not store because set contain unique element
    st.insert(2);
    st.emplace(3);
    // st --> 1 2 3

    auto it = st.find(2); // it return an address of that element

    auto it = st.find(4); // it point to st.end() like this st ---> 1 2 3 (this addrress [4]);

    st.erase(2); // 1 3  TC --> log(n)

    int cnt = st.count(1); // 1

    auto it1 = st.find(3);
    st.erase(it); // remove through address
}

void multisetLearn()
{
    // everthing is same as set
    // store duplicate element

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(1);
    // ms ==> 1 1 1 1

    ms.erase(1); // erase all 1's
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2);
}

void unorderedsetLearn()
{
    // TC --> O(1) worst case---> O(n)

    // lower and upper function does not  work rest all function are  same as above , it does not store in any particular order it has better TC than set in most case
}

void mapLearn()
{
    // Map store element in sorted order
    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map<pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.insert({2, 5});
    mpp.emplace(3, 4);
    // mpp --> 1,2  2,5  3,4

    cout << mpp[2]; // 5

    auto it = mpp.find(3);

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl; // mpp --> 1,2  2,5  3,4
    }
    // auto it = mpp.find(3);
    // cout << *(it).second;

    // cout << mpp.find(10); // mpp --> 1,2  2,5  3,4  point_here(mpp.end());
}

void MultimapLearn()
{
    // everything is same as map, store multiple keys only mpp[key] not used here
}

void unorderedmapLearn()
{
    // same as map unordered set difference
    // TC --> O(1) worst case---> O(n)
}

// ALOGORITHM'S

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p2.second > p1.second)
        return true;
    if (p2.second < p1.second)
        return false;

    // if they are same
    if (p1.first > p2.first)
        return true;
    return false;
}
void sortLearn()
{
    vector<int> v;
    int n;
    int a;
    sort(a, a + n);
    sort(v.begin(), v.end());
    sort(a + 2, a + 4);

    // decending order
    // sort(a,a+n, greater<int>);

    // when in pair

    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(arr, arr + n, comp);

    // builtin_popcount()
    int n = 5;
    cout << __builtin_popcount(n) << endl; //It returns the number of set bits (1s) in the binary representation of n.

    string s = "123";    // next permutation
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // int maxi = *max_element(a, a + n);
}

int main()
{
    return 0;
}
