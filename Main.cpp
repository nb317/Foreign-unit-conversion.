#include <iostream>
using namespace std;

void v_jie(double Num);//����ת��
void s_yingchi(double Num);//��Ӣ��ת��
void t_xiaoshi(double Num);//��Сʱת��
void cunhuolv(double num, double num2);//��������
void t_huashidu(double num);//�����϶�ת��
void s_yingli(double num);//��Ӣ��ת��

int main(void) {
	double num;
	int str;
	while(true){
		system("cls");
		cout << "����������ȷ��" << endl;
		cout << "1 : �� �� ���1��=1���" << endl;
		cout << "2 : Ӣ��" << endl;
		cout << "3 : Сʱ" << endl;
		cout << "4 : �����(������������������������)" << endl;
		cout << "5 : ���϶�" << endl;
		cout << "6 : Ӣ��" << endl;
		cin >> str;
		cout << "������Ҫ���������";
		cin >> num;
		if (str == 1) { v_jie(num); }
		if (str == 2) { s_yingchi(num); }
		if (str == 3) { t_xiaoshi(num); }
		if (str == 4) {
			double num2;
			cout << "������Ҫ����ĵ�2������";
			cin >> num2; 
			cunhuolv(num,num2); 
		}
		if (str == 5) { t_huashidu(num); }
		if (str == 6) { s_yingli(num); }
		system("pause");
	}
	return 0;
}

void v_jie(double Num) {
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << Num << " �� = " << Num * 0.514 << " ��/��" << endl;
	cout << Num << " �� = " << Num * 1.852 << " ǧ��/Сʱ" << endl;
	cout << Num << " �� = " << Num * 1.852 / 1224 << " ���" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void s_yingchi(double Num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << Num << " Ӣ�� = " << Num * 30.48 << " ����" << endl;
	cout << Num << " Ӣ�� = " << Num * 30.48 / 100 << " ��" << endl;
	cout << Num << " Ӣ�� = " << Num * 30.48 / 100000 << " ǧ��" << endl;
	cout << Num << " Ӣ�� = " << Num * 30.48 / 1000000 << " ����" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void t_xiaoshi(double Num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "������������" << endl;
	cout << Num << " Сʱ = " << Num / 24 << " ��(24Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 24 / 7 << " ��(һ��24Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 24 / 30 << " ��(һ��24Сʱ��һ����30��)" << endl;
	cout << Num << " Сʱ = " << Num / 24 / 365 << " ��(һ��24Сʱ)" << endl;
	cout << endl;
	cout << "��һ��ֻ˯��Сʱ��" << endl;
	cout << Num << " Сʱ = " << Num / 20 << " ��(20Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 20 / 7 << " ��(һ��20Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 20 / 30 << " ��(һ��20Сʱ��һ����30��)" << endl;
	cout << Num << " Сʱ = " << Num / 20 / 365 << " ��(һ��20Сʱ��һ��365��)" << endl;
	cout << "��һ��˯��Сʱ��" << endl;
	cout << endl;
	cout << Num << " Сʱ = " << Num / 16 << " ��(20Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 16 / 7 << " ��(һ��16Сʱ)" << endl;
	cout << Num << " Сʱ = " << Num / 16 / 30 << " ��(һ��16Сʱ��һ����30��)" << endl;
	cout << Num << " Сʱ = " << Num / 16 / 365 << " ��(һ��16Сʱ��һ��365��)" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void cunhuolv(double num, double num2){
	double sum = num + num2;
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "�����Ϊ��" << num / sum << endl;
	cout << "������Ϊ��" << num2 / sum << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void t_huashidu(double num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << num << " ���϶� = " << (num - 32) / 1.8 << " ���϶�" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void s_yingli(double num)
{
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << num << " Ӣ�� = " << num * 1.609344 << " ����" << endl;
	cout << num << " Ӣ��/Сʱ = " << num * 1.609344 << " ����/Сʱ" << endl;
	cout << num << " Ӣ��/Сʱ = " << num * 1.609344 / 3.6 << " ��/��" << endl;
	cout << num << " Ӣ��/Сʱ = " << num * 1.609344 / 3.6 / 1000 << " ����/��" << endl;
	cout << num << " Ӣ��/Сʱ = " << num * 1.609344 / 1224 << " ���" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}