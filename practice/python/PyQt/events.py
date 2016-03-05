import sys
from PyQt5.QtCore import Qt
from PyQt5.QtWidgets import (QWidget, QLCDNumber, QSlider, QHBoxLayout, QApplication)

class Example(QWidget):

    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):

        lcd = QLCDNumber(self)
        sld = QSlider(self)

        hbox = QHBoxLayout()
        hbox.addWidget(lcd)
        hbox.addWidget(sld)


        self.setLayout(hbox)
        sld.valueChanged.connect(lcd.display)

        self.setGeometry(300, 300, 300, 300)
        self.setWindowTitle('Event')
        self.show()

if __name__ == '__main__':

    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())
