#include"base64.h"

//二进制字符串转int类型（仅INT范围内）
int BinToDecInt(string strBin){
              int num = 0;
			  int b = 0;
			  for(int i = 0; i < strBin.length() ;i++){
				  num = num * 2;
				  b = static_cast<int>(strBin[i]-'0');
				  num = num + b;
			  }
			  return num;
		}

void BinToBase64(string binStr , string &base64Str)
{
	while(binStr.length() % 6 != 0){
		binStr = binStr + "0";
	}
	base64Str = "";
	string tmp = "";
	int index = 0;
	int num = 0;
	while(index < binStr.length()){
		tmp = binStr.substr(index , 6);
		index = index + 6;
		num = BinToDecInt(tmp);
		base64Str = base64Str + Base64EncodeMap[num];
	}
	base64Str = base64Str + "=";
}



void HexToBin(string hexDight , string& binDight){
	binDight = "";
	int f = 0,c = 0;
	char e;
	for(int f = 0; f < hexDight.length() ; f++){
		e = hexDight[f];
		if(e >= 'a' && e <= 'f'){
			int a = static_cast<int>(e-'a'+10);
			switch(a){
				case 10 : binDight = binDight + "1010";
					break;
				case 11 : binDight = binDight + "1011";
					break;
				case 12 : binDight = binDight + "1100";
					break;
				case 13 : binDight = binDight + "1101";
					break;
				case 14 : binDight = binDight + "1110";
					break;
				case 15 : binDight = binDight + "1111";
					break;
			}
		}
		else if( e >= '0' && e <= '9'){
			int b = static_cast<int>(e-'0');
			if(f == 0){
			switch(b){
				case 0: binDight = binDight + "0000";
					break;
				case 1: binDight = binDight + "0001";
					break;
				case 2: binDight = binDight + "0010";
					break;
				case 3: binDight = binDight + "0011";
					break;
				case 4: binDight = binDight + "0100";
					break;
				case 5: binDight = binDight + "0101";
					break;
				case 6: binDight = binDight + "0110";
					break;
				case 7: binDight = binDight + "0111";
					break;
				case 8: binDight = binDight + "1000";
					break;
				case 9: binDight = binDight + "1001";
					break;		
			}
			}
			else{
				switch(b){
				case 0 : binDight = binDight + "0000";
						 break;
				case 1: binDight = binDight + "0001";
					break;
				case 2: binDight = binDight + "0010";
					break;
				case 3: binDight = binDight + "0011";
					break;
				case 4: binDight = binDight + "0100";
					break;
				case 5: binDight = binDight + "0101";
					break;
				case 6: binDight = binDight + "0110";
					break;
				case 7: binDight = binDight + "0111";
					break;
				case 8: binDight = binDight + "1000";
					break;
				case 9: binDight = binDight + "1001";
					break;		
				}
			}
		}
	}
}