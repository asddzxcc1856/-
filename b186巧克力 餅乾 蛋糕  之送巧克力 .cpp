#include <iostream>
using namespace std;

int main ()
{
   int a,b,c;
   while (cin >> a >> b >> c)   // a �氮 b ���J�O c �J�|    �C 10�ӻ氮 2�ӳJ�| �N�h�e�@�ӥ��J�O     
   {
      int s=0,g=0,add=0;
      if (a>=10 && c>=2)
      {
         s=a/10;
         g=c/2;
         if(s>=g)
         {
            add=s-(s-g);   
            cout << a << " �ӻ氮�A" << b+add << " �����J�O�A" << c << " �ӳJ�|�C" << endl;  // �`�N���� 
         }
         else 
         {
            add=g-(g-s);
            cout << a << " �ӻ氮�A" << b+add << " �����J�O�A" << c << " �ӳJ�|�C" << endl; 
         }
      }
      else
         cout << a << " �ӻ氮�A" << b << " �����J�O�A" << c << " �ӳJ�|�C" << endl; 
   }
   
} 
