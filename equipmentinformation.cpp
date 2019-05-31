#include "equipmentinformation.h"

EquipmentInformation::EquipmentInformation()
{

}

QDate EquipmentInformation::getPurchaseDate() const
{
	return purchaseDate;
}

void EquipmentInformation::setPurchaseDate(const QDate &value)
{
	purchaseDate = value;
}

int EquipmentInformation::getServiceLife() const
{
	return serviceLife;
}

void EquipmentInformation::setServiceLife(int value)
{
	serviceLife = value;
}

QString EquipmentInformation::getLocation() const
{
	return location;
}

void EquipmentInformation::setLocation(const QString &value)
{
	location = value;
}

EquipmentInformation::UsageState EquipmentInformation::getUsageState() const
{
	return usageState;
}

void EquipmentInformation::setUsageState(const UsageState &value)
{
	usageState = value;
}

int EquipmentInformation::getPower() const
{
	return power;
}

void EquipmentInformation::setPower(int value)
{
	power = value;
}

int EquipmentInformation::getPrice() const
{
	return price;
}

void EquipmentInformation::setPrice(int value)
{
	price = value;
}

QPixmap EquipmentInformation::getPicture() const
{
	return picture;
}

void EquipmentInformation::setPicture(const QPixmap &value)
{
	picture = value;
}

QString EquipmentInformation::getManufacturer() const
{
	return manufacturer;
}

void EquipmentInformation::setManufacturer(const QString &value)
{
	manufacturer = value;
}

EquipmentInformation::EquipmentType EquipmentInformation::getEquipmentTtype() const
{
	return equipmentTtype;
}

void EquipmentInformation::setEquipmentTtype(const EquipmentType &value)
{
	equipmentTtype = value;
}

int EquipmentInformation::getId() const
{
	return id;
}

void EquipmentInformation::setId(int value)
{
	id = value;
}

QString EquipmentInformation::getName() const
{
	return name;
}

void EquipmentInformation::setName(const QString &value)
{
	name = value;
}
