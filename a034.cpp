#include <iostream>
using namespace std;

int main ()
{
   int d; // �Ψӿ�J�Q�i��� 
   string b = ""; // �ΨӦs�G�i��� 
   while (cin >> d) // ��J�Q�i��� 
   {
      b = "";  
      for(; d > 0; d /= 2) /* �j��@�h�P�w�N���F�A�]�i�H�ϥ�while(d > 0)�A���O�j��̤U���N�ݭn�A�[�Jd /= 2�Ӱ��B�� */ 
      { 
      char x = (d%2) + '0'; // �N�l���ഫ���r�� 
      b = x + b; // �N�r���[�J�r�� 
      } 
      cout << b  << endl;
   }
}
