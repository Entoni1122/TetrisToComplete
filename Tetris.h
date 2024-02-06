#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 700


#define STAGE_WIDTH 12
#define STAGE_HEIGHT 22
#define TILE_SIZE 24
#define TETROMINO_SIZE 4
#define FONT_SIZE 40
#define STARTOFFSETX (WINDOW_WIDTH / 2) - ((STAGE_WIDTH * TILE_SIZE) / 2)
#define STARTOFFSETY (WINDOW_HEIGHT / 2) - ((STAGE_HEIGHT * TILE_SIZE) / 2)
#define TETROMINOSTARTX STAGE_WIDTH / 2
#define TETROMINOSTARTY 0

int CheckCollision(const int tetrominoStartX, const int tetrominoStartY, const int *tetromino);