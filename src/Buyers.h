#include "detector.h"
#if _pragma_once_support
#pragma once
#endif
#ifndef BUYERS_H
#define BUYERS_H

#include "ui_Buyers.h"

class IDataLayer;
class BuyerData;

class Buyers : public QDialog, public Ui::Buyers {

  Q_OBJECT

public:
  Buyers(QWidget *parent, int mode, IDataLayer *dl);
  void selectData(QString name,
                  int type); // 0 - company, 1 - department, 2 - natural person
  bool insertData();
  bool updateData();
  const QString getRetBuyer();

public slots:

  void okClick();
  void requiredTic(int);

private:
  QStringList allNames;
  QString ret;
  IDataLayer *dataLayer;
  int workingMode; // 0 = new

  QString isEmpty(QString in);
  void init();
  void getData(BuyerData buyerData);
  void setData(BuyerData &buyerData);
  bool validate();
  bool validateUpdated();
};
#endif
