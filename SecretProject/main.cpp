#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0); string _0x41a76b; cout << "Enter the Password!>> "; getline(cin, _0x41a76b); int _0x3d7732 = 0x0;
	int _0x4949[] = { 0x1e, 0x31, 0xa, 0x1e, 0x55, 0x15, 0xa, 0x1e, 0x1e, 0x63, 0xb, 0x32, 0x2b, 0x37, 0x40, 0x1e, 0x32, 0xc, 0x1e, 0x4e, 0x20, 0x36, 0x14, 0x27, 0x2a, 0xb };
	int _0x42931[] = { 0x2a, 0x34, 0x62, 0x4e, 0x1a, 0x17, 0x16, 0x23, 0x4e, 0x4, 0x64, 0x3d, 0x47, 0x32, 0x34, 0x4a, 0x3b, 0x14, 0x30, 0x21, 0x4e, 0x31, 0x2d, 0x4b, 0x3f, 0x16 };
	for (_0x3d7732 = 0x0; _0x3d7732 < 0x1A; _0x3d7732++) { if (![](char _0x32aa3b, int _0x114389, int _0x138062) { return _0x32aa3b == (char)(_0x114389 + _0x138062); }(_0x41a76b[_0x3d7732], _0x4949[_0x3d7732], _0x42931[_0x3d7732])) break; }
	if (_0x3d7732 >= 0x1A) { cout << "Correct Password!\nSend this Password to 22G Minseo Kim!\n"; } else { cout << "Wrong Password!\nTry Again!\n"; }
}