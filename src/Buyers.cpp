
#include "Buyers.h"
#include <QMessageBox>
#include <QtDebug>
#include <QLineEdit>
#include <QRegExp>
#include <QByteArray>
#include <QChar>
#include "Settings.h"
#include  "Validations.h"

/** Constructor
 */

Buyers::Buyers(QWidget *parent, int mode, IDataLayer *dl) :
	QDialog(parent) {

	workingMode = mode;
	dataLayer = dl;
	setupUi(this);
	init();
}

/** init()
 */

void Buyers::init() {

    allNames = dataLayer->buyersGetFirmList();

	// connects
	connect(okButton, SIGNAL(clicked()), this, SLOT(okClick()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}


QString const Buyers::getRetBuyer() const
{
    return ret;
}

// --------- SLOTS START --
/** Slot - ok & save
 */

void Buyers::okClick() {

	if (workingMode == 1) {

        if (updateData()) {



            ret = isEmpty(nameEdit->text()) + "|" + isEmpty(typeCombo->currentText()) + "|" + isEmpty(
                placeEdit->text()) + "|" + isEmpty(addressEdit->text()) + "|"
                + isEmpty(telefonEdit->text()) + "|" + isEmpty(nipEdit->text()) + "|"
                + isEmpty(codeEdit->text()) + "|" + isEmpty(accountEdit->text()) + "|" + isEmpty(telefonEdit->text()) + "|"
                + isEmpty(emailEdit->text()) + "|" + isEmpty(wwwEdit->text());
            accept();
        }
	} else {

		if (insertData()) {

            ret = isEmpty(nameEdit->text()) + "|" + isEmpty(typeCombo->currentText()) + "|" + isEmpty(
                        placeEdit->text()) + "|" + isEmpty(addressEdit->text()) + "|"
                        + isEmpty(telefonEdit->text()) + "|" + isEmpty(nipEdit->text()) + "|"
                        + isEmpty(codeEdit->text()) + "|" + isEmpty(accountEdit->text()) + "|" + isEmpty(telefonEdit->text()) + "|"
                        + isEmpty(emailEdit->text()) + "|" + isEmpty(wwwEdit->text());
			accept();
		}
	}

}

// --------- SLOTS END --

//***** DATA access START ****
// load data modification mode

void Buyers::selectData(QString name, int type) {

	setWindowTitle(trUtf8("Edytuj kontrahenta"));
    getData(dataLayer->buyersSelectData(name, type));
	typeCombo->setCurrentIndex(type);
	typeCombo->setEnabled(false);
}

// new customer insert data
bool Buyers::insertData() {

	bool result = false;

	if (validate()) {

        BuyerData buyerData;
        setData(buyerData);
        result = dataLayer->buyersInsertData(buyerData,
					typeCombo->currentIndex());
	}

	return result;
}

// update existing
bool Buyers::updateData() {

	bool result = false;
    if (validateUpdated()) {

        BuyerData buyerData;
        setData(buyerData);

        result = dataLayer->buyersUpdateData(buyerData,
					typeCombo->currentIndex(), nameEdit->text());
	}

	return result;
}
//***** DATA access END ****


//********************** VALIDATION START ************************
/** Validate form
 *  Don't save when no
 *  "name", "city", "street", "tic"
 */

/** validate()
 */

bool Buyers::validate() {

    if (Validations::instance()->isEmptyField(nameEdit->text(),textLabel1->text())) return false;
    if (Validations::instance()->isEmptyField(placeEdit->text(),textLabel3->text())) return false;

    if (!Validations::instance()->isEmptyField(codeEdit->text(),textLabel4->text())) {
        if (!Validations::instance()->validateZip(codeEdit->text())) return false;
   } else {
        return false;
    }

    if (Validations::instance()->isEmptyField(addressEdit->text(),textLabel2->text())) return false;

    if (!Validations::instance()->isEmptyField(nipEdit->text(),textLabel2_2->text())) {
        if (!Validations::instance()->validateNIP(nipEdit->text())) return false;
        if (!Validations::instance()->checkSumNIP(nipEdit->text())) return false;
    } else {
        return false;
    }

    if (!accountEdit->text().isEmpty()) {
        if (!Validations::instance()->validateAccount(accountEdit->text())) return false;
        if (!Validations::instance()->checkSumAccount(accountEdit->text())) return false;
   }

    if (!telefonEdit->text().isEmpty()) {
        if (!Validations::instance()->validateTel(telefonEdit->text())) return false;
   }

    if (!emailEdit->text().isEmpty()) {
        if (!Validations::instance()->validateEmail(emailEdit->text())) return false;
   }

    if (!wwwEdit->text().isEmpty()) {
        if (!Validations::instance()->validateWebsite(wwwEdit->text())) return false;
   }

    if (allNames.indexOf(QRegExp(nameEdit->text(), Qt::CaseSensitive,
            QRegExp::FixedString)) != -1) {
        QMessageBox::critical(
                0,
                "QFaktury",
                trUtf8("Kontrahent nie moze zostać dodany ponieważ istnieje już kontrahent o tej nazwie."));
        return false;
    }


	return true;
}

bool Buyers::validateUpdated()
{
    if (Validations::instance()->isEmptyField(nameEdit->text(),textLabel1->text())) return false;
    if (Validations::instance()->isEmptyField(placeEdit->text(),textLabel3->text())) return false;

    if (!Validations::instance()->isEmptyField(codeEdit->text(),textLabel4->text())) {
        if (!Validations::instance()->validateZip(codeEdit->text())) return false;
   } else {
        return false;
    }

    if (Validations::instance()->isEmptyField(addressEdit->text(),textLabel2->text())) return false;

    if (!Validations::instance()->isEmptyField(nipEdit->text(),textLabel2_2->text())) {
        if (!Validations::instance()->validateNIP(nipEdit->text())) return false;
        if (!Validations::instance()->checkSumNIP(nipEdit->text())) return false;
    } else {
        return false;
    }

    if (!accountEdit->text().isEmpty()) {
        if (!Validations::instance()->validateAccount(accountEdit->text())) return false;
        if (!Validations::instance()->checkSumAccount(accountEdit->text())) return false;
   }

    if (!telefonEdit->text().isEmpty()) {
        if (!Validations::instance()->validateTel(telefonEdit->text())) return false;
   }

    if (!emailEdit->text().isEmpty()) {
        if (!Validations::instance()->validateEmail(emailEdit->text())) return false;
   }

    if (!wwwEdit->text().isEmpty()) {
        if (!Validations::instance()->validateWebsite(wwwEdit->text())) return false;
   }

    return true;
}

//********************** VALIDATION  END ************************


//********************** DATA METHODS START *********************
/** Loads data from labels into Data object
 */

void Buyers::setData(BuyerData& buyerData) {

    buyerData.name = nameEdit->text();
    buyerData.place= placeEdit->text();
    buyerData.code = codeEdit->text();
    buyerData.address = addressEdit->text();
    buyerData.tic = nipEdit->text();
    buyerData.account = accountEdit->text();
    buyerData.phone = telefonEdit->text();
    buyerData.email = emailEdit->text();
    buyerData.www = wwwEdit->text();
}

/** Load details
 */

void Buyers::getData(BuyerData buyerData) {

    nameEdit->setText(buyerData.name);
    placeEdit->setText(buyerData.place);
    codeEdit->setText(buyerData.code);
    addressEdit->setText(buyerData.address);
    nipEdit->setText(buyerData.tic);
    accountEdit->setText(buyerData.account);
    telefonEdit->setText(buyerData.phone);
    emailEdit->setText(buyerData.email);
    wwwEdit->setText(buyerData.www);
}
//********************** DATA METHODS END *********************

// helper method which sets "-" in input forms
QString Buyers::isEmpty(QString in) {

	if (in == "") return "-";
	return in;
}
