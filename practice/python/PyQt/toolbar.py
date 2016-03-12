import sys
from PyQt5.QtWidgets import QAction, QMainWindow, QApplication, qApp
from PyQt5.QtGui import QIcon

class Example(QMainWindow):

    def __init__(self):
        super().__init__()

        self.initUI()

    def initUI(self):

        exitBtn = QAction(QIcon('exit.png'), 'Exit', self)
        exitBtn.setShortcut('Ctrl+Q')
        exitBtn.triggered.connect(qApp.quit)

        self.toolbar = self.addToolBar('Exit')
        self.toolbar.addAction(exitBtn)

        self.setGeometry(300, 300, 300, 250)
        self.setWindowTitle('Tooltip')
        self.setWindowIcon(QIcon('web.png'))
        self.show()

if __name__ == '__main__':

    app = QApplication(sys.argv)
    ex = Example()
    sys.exit(app.exec_())