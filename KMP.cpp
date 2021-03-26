#include <iostream>

using namespace std;

int BFSearch(const string & txt, string & pat)
{
    int lent = txt.length();
    int lenp = pat.length();
    for(int i = 0; i <= lent - lenp; i++)
    {
        int j = 0;
        for(j = 0; j < lenp; j++)
        {
            if(txt[i + j] != pat[j]) break;
        }
        if(j == lenp) return j;
    }
    return -1;
}

void getNext(int * next, string & pat)
{
    int j = -1;
    next[0] = -1;
    for(int i = 1; i < pat.length(); i++)
    {
        while(j != -1 && pat[j + 1] != pat[i])
        {
            j = next[j];
        }
        if(pat[j + 1] == pat[i])
        {
            j++;
        }
        next[i] = j;
    }
}

int KMP(const string & txt, string & pat, int * next)
{
    int j = -1;
    for(int i = 0; i < txt.length(); i++)
    {
        while(j != -1 && pat[j + 1] != txt[i])
        {
            j = next[j];
        }
        if(pat[j + 1] == txt[i])
        {
            j++;
        }
        if(j == pat.length() - 1) return j;
    }
    return -1;
}

int main()
{
    const string txt = "abcdabceabcdabcf";
    string pat = "abcdabcf";
    int next[8];
    cout << BFSearch(txt, pat) << endl;
    getNext(next, pat);
    for(int i = 0; i < pat.length(); i++)
        cout << next[i] + 1 << " ";
    cout << endl;
    cout << KMP(txt, pat, next) << endl;
    return 0;
}