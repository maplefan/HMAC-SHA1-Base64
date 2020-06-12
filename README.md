# HMAC-SHA1-Base64
HMAC-SHA1&amp;Base64加密过程的Python实现以及使用C++实现。
# How to use

``` cpp
// HMAC-SHA1 Base64 test program
#include<iostream>
#include"hmac.h"
#include"sha1.h"
#include"base64.h"

using namespace std;

int main(int argc, _TCHAR* argv[])
{
	std::string msg = "hello?world\n";
	cout<<msg.length()<<endl;;
    std::string key = "hahaha";
    std::string sha1hmac = hmac< SHA1 >(msg, key);
	cout<<"sha1hmac:"<<sha1hmac<<endl;
	string binDight , base64Str;
	string resNum = sha1hmac;
	HexToBin(resNum , binDight);//转化为原始二进制
	cout<<binDight<<endl;
	BinToBase64(binDight , base64Str);//原始二进制转化为Base64
	cout<<"结果为："<<base64Str<<endl;
}
```

``` python
// HMAC-SHA1 Base64 test program
def hash_hmac(code, key):
  """sha1加密签名算法"""
  hmac_code = hmac.new(key.encode(), code.encode(), sha1).digest()
  return base64.b64encode(hmac_code).decode()
```
