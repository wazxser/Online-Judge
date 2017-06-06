#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <string>
#include <cstring>
#include <map>

using namespace std;

typedef struct str_node{
    string str;
    int step;
} node;

queue<node> q;
map<string ,int> m;
int size;

bool judge(string str){
    int len = str.length();
    for(int i = 0; i < len-3; i++){
        if(str[i] == '2' && str[i+1] == '0' && str[i+2] == '1' && str[i+3] == '2')
            return true;
    }

    return false;
}

int bfs(){
    while(!q.empty()){
        node anode = q.front();
        q.pop();
        if(judge(anode.str)){
            return anode.step;
        }
        int len = anode.str.length();
        for(int i = 0; i < len-1; i++){
            string temp = anode.str;
            char ch = temp[i];
            temp[i] = temp[i+1];
            temp[i+1] = ch;

//            if(m.find(temp) == m.end()){
//                node bnode;
//                bnode.str = temp;
//                bnode.step = anode.step + 1;
//                q.push(bnode);
//                m[bnode.str] = size++;
//            }
        }
    }

    return -1;
}

int main(){
    int n;
    string s;
    while(~scanf("%d", &n)){
        cin >> s;
        size = 0;
        while(!q.empty()){
            q.pop();
        }
        m.clear();
//        cout << s.length() << s.size() << endl;
        node no;
        no.str = s;
        no.step = 0;
        q.push(no);
        m[s] = size++;

        printf("%d\n", bfs());
    }


    return 0;
}
