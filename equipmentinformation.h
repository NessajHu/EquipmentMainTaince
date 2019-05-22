#ifndef EQUIPMENTINFORMATION_H
#define EQUIPMENTINFORMATION_H

#include <QPixmap>
#include <QString>
#include <QDate>

class EquipmentInformation
{
	enum class EquipmentType
	{
		A = 0,
		B = 1,
		C = 2,
		D = 3,
	};
	enum class UsageState
	{
		Using = 0,
		Shutdown = 1,
		WaitingForRepaired = 2,
		DisCard = 3,
	};

public:
	EquipmentInformation();
	QString name = QString("");
	int id = 0;
	EquipmentType equipmentTtype = EquipmentType::A;
	QString manufacturer = QString("");
	QPixmap picture;
	int price;
	int power;
	UsageState usageState = UsageState::Shutdown;
	QString location = QString("");
	int serviceLife = 0;
	QDate
};
//设备名称、编号、类型、生产厂家、图片、价格、功率、使用状态、位置、使用年限，购买时间。
#endif // EQUIPMENTINFORMATION_H
