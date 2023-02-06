#include <iostream>
using namespace std;

void v_jie(double Num);//将节转化
void s_yingchi(double Num);//将英尺转化
void t_xiaoshi(double Num);//将小时转化
void cunhuolv(double num, double num2);//计算存活率
void t_huashidu(double num);//将华氏度转化
void s_yingli(double num);//将英里转化

int main(void) {
	double num;
	int str;
	while(true){
		system("cls");
		cout << "输入数字来确定" << endl;
		cout << "1 : 节 或 海里（1节=1海里）" << endl;
		cout << "2 : 英尺" << endl;
		cout << "3 : 小时" << endl;
		cout << "4 : 存活率(先输存活人数，再输遇难人数)" << endl;
		cout << "5 : 华氏度" << endl;
		cout << "6 : 英里" << endl;
		cin >> str;
		cout << "请输入要计算的数：";
		cin >> num;
		if (str == 1) { v_jie(num); }
		if (str == 2) { s_yingchi(num); }
		if (str == 3) { t_xiaoshi(num); }
		if (str == 4) {
			double num2;
			cout << "请输入要计算的第2个数：";
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
	cout << Num << " 节 = " << Num * 0.514 << " 米/秒" << endl;
	cout << Num << " 节 = " << Num * 1.852 << " 千米/小时" << endl;
	cout << Num << " 节 = " << Num * 1.852 / 1224 << " 马赫" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void s_yingchi(double Num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << Num << " 英尺 = " << Num * 30.48 << " 厘米" << endl;
	cout << Num << " 英尺 = " << Num * 30.48 / 100 << " 米" << endl;
	cout << Num << " 英尺 = " << Num * 30.48 / 100000 << " 千米" << endl;
	cout << Num << " 英尺 = " << Num * 30.48 / 1000000 << " 万米" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void t_xiaoshi(double Num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "若连续工作：" << endl;
	cout << Num << " 小时 = " << Num / 24 << " 天(24小时)" << endl;
	cout << Num << " 小时 = " << Num / 24 / 7 << " 周(一天24小时)" << endl;
	cout << Num << " 小时 = " << Num / 24 / 30 << " 月(一天24小时，一个月30天)" << endl;
	cout << Num << " 小时 = " << Num / 24 / 365 << " 年(一天24小时)" << endl;
	cout << endl;
	cout << "若一天只睡四小时：" << endl;
	cout << Num << " 小时 = " << Num / 20 << " 天(20小时)" << endl;
	cout << Num << " 小时 = " << Num / 20 / 7 << " 周(一天20小时)" << endl;
	cout << Num << " 小时 = " << Num / 20 / 30 << " 月(一天20小时，一个月30天)" << endl;
	cout << Num << " 小时 = " << Num / 20 / 365 << " 年(一天20小时，一年365天)" << endl;
	cout << "若一天睡八小时：" << endl;
	cout << endl;
	cout << Num << " 小时 = " << Num / 16 << " 天(20小时)" << endl;
	cout << Num << " 小时 = " << Num / 16 / 7 << " 周(一天16小时)" << endl;
	cout << Num << " 小时 = " << Num / 16 / 30 << " 月(一天16小时，一个月30天)" << endl;
	cout << Num << " 小时 = " << Num / 16 / 365 << " 年(一天16小时，一年365天)" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void cunhuolv(double num, double num2){
	double sum = num + num2;
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "存活率为：" << num / sum << endl;
	cout << "死亡率为：" << num2 / sum << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void t_huashidu(double num){
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << num << " 华氏度 = " << (num - 32) / 1.8 << " 摄氏度" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}

void s_yingli(double num)
{
	cout << endl;
	cout << "--------------------------------------------------" << endl;
	cout << num << " 英里 = " << num * 1.609344 << " 公里" << endl;
	cout << num << " 英里/小时 = " << num * 1.609344 << " 公里/小时" << endl;
	cout << num << " 英里/小时 = " << num * 1.609344 / 3.6 << " 米/秒" << endl;
	cout << num << " 英里/小时 = " << num * 1.609344 / 3.6 / 1000 << " 公里/秒" << endl;
	cout << num << " 英里/小时 = " << num * 1.609344 / 1224 << " 马赫" << endl;
	cout << "--------------------------------------------------" << endl;
	cout << endl;
}