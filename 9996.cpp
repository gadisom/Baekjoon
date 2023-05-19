#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
int main() {
    string s,left,right;
    vector<string> v ;
    int n ;
    cin >> n >> s;
    size_t found = s.find('*');
    
    // *을 기준으로 왼쪽 오른쪽 문자열을 분할
    left = s.substr(0,found);
    right = s.substr(found+1);
    
    for(int i=0; i<n; i++)
    {
        string compare ;
        cin>> s;
        v.push_back(s);
    }
    
    for(auto m: v)
    {
        if(left.length()+right.length() > m.length())
            cout <<"NE";
        else {
            if(left == m.substr(0,left.size()) && right == m.substr(m.size()-right.size()))
                cout <<"DA";
            else cout <<"NE";
        }
        cout<<"\n";
    }
}
