#ifndef SETTINGS_H
#define SETTINGS_H
class Settings: public QSettings {
    public:
    Settings():QSettings("elinux","qfaktury") {}
};
#endif
