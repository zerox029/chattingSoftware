#ifndef HEADER_FENSERVEUR
#define HEADER_FENSERVEUR

#include <QtWidgets>
#include <QtNetwork>

class serverWindow : public QWidget
{
    Q_OBJECT

    public:
        serverWindow();
        void sendToAll(const QString &message);

    private slots:
        void newConnexion();
        void receivedData();
        void deconnexionClient();

    private:
        QLabel *serverState;
        QPushButton *quitButton;

        QTcpServer *server;
        QList<QTcpSocket *> clients;
        quint16 messageLength;
};

#endif
