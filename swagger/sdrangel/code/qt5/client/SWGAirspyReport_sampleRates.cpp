/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGAirspyReport_sampleRates.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGAirspyReport_sampleRates::SWGAirspyReport_sampleRates(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAirspyReport_sampleRates::SWGAirspyReport_sampleRates() {
    sample_rate = 0;
    m_sample_rate_isSet = false;
}

SWGAirspyReport_sampleRates::~SWGAirspyReport_sampleRates() {
    this->cleanup();
}

void
SWGAirspyReport_sampleRates::init() {
    sample_rate = 0;
    m_sample_rate_isSet = false;
}

void
SWGAirspyReport_sampleRates::cleanup() {

}

SWGAirspyReport_sampleRates*
SWGAirspyReport_sampleRates::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAirspyReport_sampleRates::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    
}

QString
SWGAirspyReport_sampleRates::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGAirspyReport_sampleRates::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_sample_rate_isSet){
        obj->insert("sampleRate", QJsonValue(sample_rate));
    }

    return obj;
}

qint32
SWGAirspyReport_sampleRates::getSampleRate() {
    return sample_rate;
}
void
SWGAirspyReport_sampleRates::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
    this->m_sample_rate_isSet = true;
}


bool
SWGAirspyReport_sampleRates::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_sample_rate_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
