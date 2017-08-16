#define QFAKTURY_VERSION 0.7.0
#include <QStringList>

const QStringList blackEmergTemplate = QStringList() << ".page_break {page-break-before: always;}" <<
                                            "\n" <<
                                            "h1 {" <<
                                            "\n" <<
                                            "font-family: Verdana, Tahoma, Arial; \n" <<
                                            "font-size: 18px; \n" <<
                                            "color: #000000; \n" <<
                                            "font-style: normal; \n" <<
                                            "font-weight: bold; \n"
                                            "} \n" <<
                                            "h2 { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 16px; \n" <<
                                             "color: #000000;  \n" <<
                                             "font-style: normal; \n" <<
                                             "font-weight: bold; \n" <<
                                            "} \n" <<
                                            "h3 { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 14px; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "font-weight: bold; \n" <<
                                            "} \n" <<
                                            "#buyer { \n" <<
                                            "font-weight: 600; \n" <<
                                            "} \n" <<
                                            "#seller { \n" <<
                                            "font-weight: 600; \n" <<
                                            "} \n" <<
                                            "h4 { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 12px; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "font-weight: bold; \n" <<
                                            "} \n" <<
                                            "#rightInvTable tr td { \n" <<
                                             "text-align: center; \n" <<
                                             "vertical-align: middle; \n" <<
                                             "padding: 1px; \n" <<
                                            "} \n" <<
                                            "#invFirstLine { \n" <<
                                             "text-align: center; \n" <<
                                             "vertical-align: middle; \n" <<
                                            "} \n" <<
                                            "#totalRatesTable tr td { \n" <<
                                             "text-align: center; \n" <<
                                             "vertical-align: middle; \n" <<
                                            "} \n" <<
                                            ".persons { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 8pt; \n" <<
                                             "text-align: left; \n" <<
                                            "} \n" <<
                                            ".productsHeader { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 8pt; \n" <<
                                             "font-weight: 600; \n" <<
                                             "color: #000000; \n" <<
                                              "text-align: center; \n" <<
                                            "} \n" <<
                                            ".products td { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "border-spacing: 0; \n" <<
                                             "font-size: 8pt;  \n" <<
                                             "font-weight: 400; \n" <<
                                             "text-align: center; \n" <<
                                             "vertical-align: middle; \n" <<
                                            "} \n" <<
                                            ".productsSumHeader { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "font-size:8pt; \n" <<
                                             "font-weight:400; \n" <<
                                             "text-align: center; \n" <<
                                             "table-layout: auto; \n" <<
                                            "} \n" <<
                                            ".productsSum { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "font-size:8pt; \n" <<
                                             "font-weight:600; \n" <<
                                             "text-align: right; \n" <<
                                             "border: 0px \n" <<
                                            "} \n" <<
                                            ".payDate { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 12px; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "font-weight: bold; \n" <<
                                            "} \n" <<
                                            ".toPay { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size: 8pt; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                            "} \n" <<
                                            ".summary { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size:8pt; \n" <<
                                             "font-style: normal; \n" <<
                                            "} \n" <<
                                            ".additionalText { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size:8pt; \n" <<
                                             "font-style: normal; \n" <<
                                            "} \n" <<
                                            ".stamp { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size:6pt; \n" <<
                                             "font-weight:400; \n" <<
                                             "text-align: left; \n" <<
                                            "} \n" <<
                                            ".dates { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size:8pt; \n" <<
                                             "font-weight: 600; \n" <<
                                             "text-align: center; \n" <<
                                            "} \n" <<
                                            ".signature { \n" <<
                                             "font-family: Verdana, Tahoma, Arial; \n" <<
                                             "font-size:6pt; \n" <<
                                             "font-weight:400; \n" <<
                                             "color: #000000; \n" <<
                                             "font-style: normal; \n" <<
                                             "text-align: center; \n" <<
                                            "} \n" <<
                                            ".summarySmall { \n" <<
                                             "font-weight: normal; \n" <<
                                             "font-size:6pt; \n" <<
                                             "font-weight:400; \n" <<
                                            "} \n" <<
                                            ".hrdiv1 { \n" <<
                                             "color: #f0f; \n" <<
                                             "background-color: #f00; \n" <<
                                             "height: 1px; \n" <<
                                            "} \n" <<
                                            "#stempel { \n" <<
                                            "margin-right: 50px; \n" <<
                                            "margin-top: 10px; \n" <<
                                            "} \n";
