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
	QString getName() const;
	void setName(const QString &value);
	int getId() const;
	void setId(int value);
	EquipmentType getEquipmentTtype() const;
	void setEquipmentTtype(const EquipmentType &value);
	QString getManufacturer() const;
	void setManufacturer(const QString &value);
	QPixmap getPicture() const;
	void setPicture(const QPixmap &value);
	int getPrice() const;
	void setPrice(int value);
	int getPower() const;
	void setPower(int value);
	UsageState getUsageState() const;
	void setUsageState(const UsageState &value);
	QString getLocation() const;
	void setLocation(const QString &value);
	int getServiceLife() const;
	void setServiceLife(int value);
	QDate getPurchaseDate() const;
	void setPurchaseDate(const QDate &value);
private:
	QString name;
	int id;
	EquipmentType equipmentTtype;
	QString manufacturer;
	QPixmap picture;
	int price;
	int power;
	UsageState usageState;
	QString location;
	int serviceLife;
	QDate purchaseDate;
};
//设备名称、编号、类型、生产厂家、图片、价格、功率、使用状态、位置、使用年限，购买时间。
#endif // EQUIPMENTINFORMATION_H
