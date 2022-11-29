#include <QApplication>
#include <QFile>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    char pixelData[17][14] = {
         {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
         {'_', '_', '_', '_', 'C', 'C', 'C', 'C', 'C', '_', '_', '_', '_', '_'},
         {'_', '_', '_', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', 'C', '_', '_'},
         {'_', '_', '_', 'B', 'B', 'B', 'S', 'S', 'B', 'S', '_', '_', '_', '_'},
         {'_', '_', 'B', 'S', 'B', 'S', 'S', 'S', 'B', 'S', 'S', 'S', '_', '_'},
         {'_', '_', 'B', 'S', 'B', 'B', 'S', 'S', 'S', 'B', 'S', 'S', 'B', '_'},
         {'_', '_', 'B', 'B', 'S', 'S', 'S', 'S', 'B', 'B', 'B', 'B', '_', '_'},
         {'_', '_', '_', '_', 'S', 'S', 'S', 'S', 'S', 'S', 'S', '_', '_', '_'},
         {'_', '_', '_', 'C', 'C', 'O', 'C', 'C', 'C', 'C', '_', '_', '_', '_'},
         {'_', '_', 'C', 'C', 'C', 'O', 'C', 'C', 'O', 'C', 'C', 'C', '_', '_'},
         {'_', 'C', 'C', 'C', 'C', 'O', 'O', 'O', 'O', 'C', 'C', 'C', 'C', '_'},
         {'_', 'W', 'W', 'C', 'O', 'Y', 'O', 'O', 'Y', 'O', 'C', 'W', 'W', '_'},
         {'_', 'W', 'W', 'W', 'O', 'O', 'O', 'O', 'O', 'O', 'W', 'W', 'W', '_'},
         {'_', 'W', 'W', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'W', 'W', '_'},
         {'_', '_', '_', 'O', 'O', 'O', '_', '_', 'O', 'O', 'O', '_', '_', '_'},
         {'_', '_', 'B', 'B', 'B', '_', '_', '_', '_', 'B', 'B', 'B', '_', '_'},
         {'_', 'B', 'B', 'B', 'B', '_', '_', '_', '_', 'B', 'B', 'B', 'B', '_'}
    };

    const char *C = "255   0   0";
    const char *B = "100  50   0";
    const char *S = "255 200 150";
    const char *O = "  0   0 255";
    const char *Y = "255 255   0";
    const char *W = "255 255 255";
    const char *A = "229 230 232";

    QFile file("mario.ppm");
    file.open(QFile::WriteOnly);
    file.write("P3\n");
    file.write("14 17\n");
    file.write("255\n");

    for(int i = 0; i < 17; i++) {
        for(int j = 0; j < 14; j++) {
            if(pixelData[i][j] == 'C') {
                file.write(C);
                file.write(" ");
            } else if(pixelData[i][j] == 'B') {
                file.write(B);
                file.write(" ");
            } else if(pixelData[i][j] == 'S') {
                file.write(S);
                file.write(" ");
            } else if(pixelData[i][j] == 'O') {
                file.write(O);
                file.write(" ");
            } else if(pixelData[i][j] == 'Y') {
                file.write(Y);
                file.write(" ");
            } else if(pixelData[i][j] == 'W') {
                file.write(W);
                file.write(" ");
            } else if(pixelData[i][j] == '_') {
                file.write(A);
                file.write(" ");
            }
        }
        file.write("\n");
    }




















    .

































    file.close();

    QLabel label;
    label.setPixmap(QPixmap("mario.ppm").scaled(256, 256));
    label.show();

    return a.exec();
}
