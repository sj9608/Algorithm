우선 입력받은걸 벡터로 넘겨주고 푸는게 좋을것 같아보였음

길이가 짧은 순서로 벡터를 정렬하고. 중복을 제거하자

길이를 비교해서 정렬을 하면 같은단어는 길이가 같기 때문에 붙어있음.

따라서 임시 문자열 temp에 저장해두고 비교하며 같으면 continue를 이용하여 출력하지 않는 방식을 사용해서 해결함.

아래와 같이 iterator를 이용하는 방법도 있다. 

``` c++
    // function to compare length of string
    bool ft_compare(string a, string b)
    {
        if (a.length() == b.length())
            return a < b;
        return a.length() < b.length();
    }

    <------------------------main------------------------>
    // sort string ordered by lenth
    sort(v.begin(), v.end(), ft_compare);

    // erase duplicated string vector
    vector<string>::iterator it = unique(v.begin(), v.end());
    v.erase(it, v.end());

    // print
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
```