#ifndef _WZSERIALPORT_H
#define _WZSERIALPORT_H
#include<iostream>
#include <string>
#include <vector>
using namespace std;


class WZSerialPort
{
public:
	WZSerialPort();
	~WZSerialPort();

	// �򿪴���,�ɹ�����true��ʧ�ܷ���false
	// portname(������): ��Windows����"COM1""COM2"�ȣ���Linux����"/dev/ttyS1"��
	// baudrate(������): 9600��19200��38400��43000��56000��57600��115200 
	// parity(У��λ): 0Ϊ��У�飬1Ϊ��У�飬2ΪżУ�飬3Ϊ���У��
	// databit(����λ): 4-8��ͨ��Ϊ8λ
	// stopbit(ֹͣλ): 1Ϊ1λֹͣλ��2Ϊ2λֹͣλ,3Ϊ1.5λֹͣλ
	// synchronizable(ͬ�����첽): 0Ϊ�첽��1Ϊͬ��
	//�������Ѿ������ý����˳�ʼ�������ǿ����Լ�������ʹ��
	bool open(const char* portname, int baudrate = 115200, char parity = 0, char databit = 8, char stopbit = 1, char synchronizeflag = 1);

	//�رմ��ڣ���������
	void close();

	//�������ݻ�д���ݣ��ɹ����ط������ݳ��ȣ�ʧ�ܷ���0
	int send(string dat);

	//�������ݻ�����ݣ��ɹ����ض�ȡʵ�����ݵĳ��ȣ�ʧ�ܷ���0
	string receive();


	//vector<unsigned char> revcmsg;

private:
	int pHandle[16];
	char synchronizeflag;



};

#endif
