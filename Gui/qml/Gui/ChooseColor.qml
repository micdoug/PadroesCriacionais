import QtQuick 2.1
import QtQuick.Dialogs 1.1

Rectangle {
    id: root

    width: 100
    height: 62
    border.color: mouse.containsMouse ? "yellow" : "black"
    border.width: 5

    MouseArea {
        id: mouse
        anchors.fill: parent
        hoverEnabled: true
        onClicked: {
            colorDialog.visible = true
        }
    }

    ColorDialog {
        id: colorDialog
        visible: false
        onAccepted: {
            root.color = colorDialog.currentColor
        }
    }
}
