#ifndef REPLYKEYBOARDMARKUP_H
#define REPLYKEYBOARDMARKUP_H

#include <QJsonArray>
#include <QVector>

#include "tarnaobject.h"
#include "keyboardbutton.h"

class ReplyKeyboardMarkup : public TarnaObject
{
public:
    ReplyKeyboardMarkup(QJsonObject obj);
    ReplyKeyboardMarkup();
    
    static ReplyKeyboardMarkup fromObject(QJsonObject obj);

    //Getters/setters
    bool getResizeKeyboard() const;
    void setResizeKeyboard(bool value);
    
    bool getOneTimeKeyboard() const;
    void setOneTimeKeyboard(bool value);
    
    bool getSelective() const;
    void setSelective(bool value);
    
    QVector<QVector<KeyboardButton>> getKeyboard() const;
    void setKeyboard(QVector<QVector<KeyboardButton>> &value);
    
private:
    bool resizeKeyboard;
    bool oneTimeKeyboard;
    bool selective;
    
    //First dimension: a row
    //Second dimension: buttons of a row
    QVector<QVector<KeyboardButton>> keyboard;
};

#endif // REPLYKEYBOARDMARKUP_H
