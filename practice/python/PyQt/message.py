import sys
from PyQt5.QtWidgets import QWidget, QMessageBox, QApplication

class Message(QWidget):

    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):

        self.setGeometry(300, 300, 300, 250)
        self.setWindowTitle("Message to quit")
        self.show()

    def closeEvent(self, event):

        reply = QMessageBox.question(self, 'Message', 'Are you sure want to quit?',QMessageBox.Yes|
                            QMessageBox.No, QMessageBox.No)

        if reply == QMessageBox.Yes:
            event.accept()
        else:
            event.ignore()

if __name__ == '__main__':

    app = QApplication(sys.argv)
    msg = Message()
    sys.exit(app.exec_())
