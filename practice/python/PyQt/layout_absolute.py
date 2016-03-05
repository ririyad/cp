import sys
from PyQt5.QtWidgets import QWidget, QLabel, QApplication

class Example(QWidget):

    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):

        lb1 = QLabel('Python', self)
        lb1.move(15, 10)

        lb2 = QLabel('Prgramming', self)
        lb2.move(35, 40)

        lb3 = QLabel('Enjoy', self)
        lb3.move(55, 70)

        self.setGeometry(300, 300, 300, 250)
        self.setWindowTitle('Absolute')
        self.show()

if __name__ == '__main__':

    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())

