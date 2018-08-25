#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(); int i,j;
        char arr[s.size()+1];
        char res_arr[s.size()+1];
        strncpy(arr, s.c_str(),s.size());	// or pass &s[0]
        int flag=1;
        stack<char> stk;
        for( i = 0,j =0; i < n; i++)
        {
        	stk.push(arr[i]);
            if(arr[i]==' '||i==(n-1))
            {
                if(i==n-1&&flag >1)
                {
                    res_arr[j]=' ';
                    j++;
                }
                if(flag==1&&stk.top()==' ')
                {stk.pop();}
                flag++;
                while (!stk.empty()) 
                {
                    res_arr[j]=stk.top();
                    //cout<<res_arr[j];
                    if(j<n){j++;}
                    stk.pop();
                    
                }
            }
        }
        res_arr[j]='\0';
        string str(res_arr);
        //cout<<endl<<"result:"<<res_arr<<"..."<<endl;        
        return res_arr;
    }
};