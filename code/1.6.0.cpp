//����������5.0
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>

#define CLS system("cls")

using namespace std;

void mainTable();//������
void game();//��Ϸ
void about();//���ڽ���

void mainTable() {
	CLS;
	int ch;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "             ��������ϵ��               " << endl;
	cout << "                ������                  " << endl;
	cout << "                                        " << endl;
	cout << "             ��1����ʼ��Ϸ              " << endl;
	cout << "             ��2���鿴����              " << endl;
	cout << "                                        " << endl;
	cout << "              ��esc���˳�               " << endl;
	cout << "                                        " << endl;
	while (1) {
		if (_kbhit()) {//����а������£���_kbhit()����������
			ch = _getch();//ʹ��_getch()������ȡ���µļ�ֵ
			switch (ch) {
			case 49:CLS; game(); break;
			case 50:about(); break;
			case 27:exit(0);
			default:cout << "������󣡰��������������"; ch = _getch(); mainTable();
			}

		}
	}
}

void game() {
	int a,b,  ch;
	int min = 1, max = 100;
	int times = 0;
	srand((unsigned)time(NULL));
	a = (rand() % 100) + 1;
	while (true) {
		cout << "���һ��1-100����,";
		cout << "��ǰ��Χ(" << min << "��" << max << "):";
		
		if(cin>>b){
			if (b < 1 || b>100) {
				CLS;
				cout << "����������ֳ�����Χ��,���򶼲��ῴ��??" << endl;
				cout << "����һ�λ����������룡" << endl;
				continue;
			}
			else if (b<min || b>max) {
				CLS;
				cout << "�������ֳ�����ǰ��Χ,���Դ���������?" << endl;
				cout << "����һ�λ����������룡" << endl;
				continue;
			}
			if (b > a) {
				times++;
				max = b;
				CLS;
				cout << "�����������̫����Ѽ��������һ���ɣ�" << endl;
			}
			else if (b < a) {
				times++;
				min = b;
				CLS;
				cout << "�����������̫С��Ѽ����������һ���ɣ�" << endl;
			}
			else {
				times++;
				CLS;
				cout << "�¶�����������־���" << a << ".��һ������" << times << "�Σ�" << endl;
				if (times >= 1 && times <= 3)
					cout << "������Ǹ������ִ���Ŷ���Һó���㰡��" << endl;
				else if (times > 3 && times <= 5)
					cout << "��������������" << endl;
				else if (times > 5 && times <= 10)
					cout << "��������ֻ��úú�����Ŷ��" << endl;
				else
					cout << "��ɱ���������ˣ��������Ӱɣ�" << endl;
				cout << "��1�������棬�������������һ�㣬";
				while (1) {
					if (_kbhit()) {//����а������£���_kbhit()����������
						ch = _getch();//ʹ��_getch()������ȡ���µļ�ֵ
						switch (ch) {
						case 49:CLS; game(); break;
						default:mainTable();
						}

					}
				}
			}
			
		
			
		}
		else {
			CLS;
			cout << "����������������֣�" << endl;
			cin.clear();
			cin.ignore();
			system("pause");
			CLS;
			continue;
		}
	}
		
	
		
		
	
	
	
}

void about() {
	CLS;
	cout << "                                        " << endl;
	cout << "                                        " << endl;
	cout << "             ��������������             " << endl;
	cout << "                 v1.6.0                 " << endl;
	cout << "               github���ӣ�             " << endl;
	cout << " https://github.com/Lutio0215/yygqgames " << endl;
	cout << "                                        " << endl;
	cout << "         ��л���ϵ��ṩ����ͼ��         " << endl;
	cout << "                                        " << endl;
	system("pause");
	mainTable();

}

int main() {
	system("title ����������v1.6.0");
	system("color 97");
	system("mode con cols=40 lines=20");
	mainTable();
	return 0;
}