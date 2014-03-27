import QtQuick 2.1
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.1

Rectangle {
    id: root

    width: 360
    height: 360

    property alias color1: c1.color
    property alias color2: c2.color
    property alias color3: c3.color
    property alias color4: c4.color

    GridLayout {
        anchors.centerIn: parent
        columns: 2
        ChooseColor { id: c1 }
        ChooseColor { id: c2 }
        ChooseColor { id: c3 }
        ChooseColor { id: c4 }
        Button{
            text: "Enviar"
            Layout.columnSpan: 2
            Layout.fillWidth: true
            Layout.fillHeight: true
            onClicked: anim.start()
        }
        Slider {
            id: slider
            minimumValue: 2
            maximumValue: 5
            orientation: Qt.Horizontal
            Layout.fillWidth: true
            tickmarksEnabled: true
            Layout.columnSpan: 2
            stepSize: 1
        }
        Label {
            text: slider.value
            Layout.columnSpan: 2
            horizontalAlignment: Text.AlignHCenter
            Layout.fillWidth: true
        }
    }

    SequentialAnimation on color {
        id: anim
        running: false
        loops: 1
        PropertyAnimation { from: color1; to: color2; duration: slider.value*1000}
        PropertyAnimation { from: color2; to: color3; duration: slider.value*1000}
        PropertyAnimation { from: color3; to: color4; duration: slider.value*1000}
        PropertyAnimation { from: color4; to: color1; duration: slider.value*1000}
    }

}
