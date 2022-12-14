/*
 * This file was generated by dbusidl2cpp version 0.4
 * when processing input file org.kde.KMediaPlayer.xml
 *
 * dbusidl2cpp is Copyright (C) 2006 Trolltech AS. All rights reserved.
 *
 * This is an auto-generated file.
 */

#ifndef KMEDIAPLAYERADAPTOR_H_19781146507443
#define KMEDIAPLAYERADAPTOR_H_19781146507443

#include <QObject>
#include <QDBusAbstractAdaptor>
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;

/*
 * Adaptor class for interface org.kde.KMediaPlayer
 */
class KMediaPlayerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.KMediaPlayer")
    Q_CLASSINFO("D-Bus Introspection", ""
                "  <interface name=\"org.kde.KMediaPlayer\" >"
                "    <method name=\"openUrl\" >"
                "      <arg direction=\"in\" type=\"s\" name=\"file\" />"
                "      <arg direction=\"out\" type=\"b\" />"
                "    </method>"
                "    <method name=\"pause\" />"
                "    <method name=\"play\" />"
                "    <method name=\"stop\" />"
                "    <method name=\"seek\" >"
                "      <arg direction=\"in\" type=\"x\" name=\"msec\" />"
                "    </method>"
                "    <property access=\"read\" type=\"b\" name=\"seekable\" >"
                "      <annotation value=\"isSeekable\" name=\"com.trolltech.QtDBus.propertyGetter\" />"
                "    </property>"
                "    <property access=\"read\" type=\"x\" name=\"position\" />"
                "    <property access=\"read\" type=\"b\" name=\"hasLength\" />"
                "    <property access=\"read\" type=\"x\" name=\"length\" />"
                "    <property access=\"readwrite\" type=\"b\" name=\"looping\" >"
                "      <annotation value=\"isLooping\" name=\"com.trolltech.QtDBus.propertyGetter\" />"
                "    </property>"
                "    <property access=\"readwrite\" type=\"i\" name=\"state\" />"
                "  </interface>"
                "")
public:
    KMediaPlayerAdaptor(QObject *parent);
    ~KMediaPlayerAdaptor() override;

public: // PROPERTIES
    Q_PROPERTY(bool hasLength READ hasLength)
    bool hasLength() const;

    Q_PROPERTY(qlonglong length READ length)
    qlonglong length() const;

    Q_PROPERTY(bool looping READ isLooping WRITE setLooping)
    bool isLooping() const;
    void setLooping(bool value);

    Q_PROPERTY(qlonglong position READ position)
    qlonglong position() const;

    Q_PROPERTY(bool seekable READ isSeekable)
    bool isSeekable() const;

    Q_PROPERTY(int state READ state WRITE setState)
    int state() const;
    void setState(int value);

public Q_SLOTS: // METHODS
    bool openUrl(const QString &file);
    void pause();
    void play();
    void seek(qlonglong msec);
    void stop();
Q_SIGNALS: // SIGNALS
};

#endif
