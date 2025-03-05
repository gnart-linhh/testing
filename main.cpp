#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>

const int SCREEN_WIDTH=640 ;
const int SCREEN_HEIGHT=480 ;

class LTexture {
    public:
        LTexture();
        ~LTexture();
        bool loadFromFile(std::string path);
        void free();
        void setColor(Uint8 red, Uint8 green, Uint8 blue) ;
        void setBlendMode(SDL_BlendMode blending) ;
        void setAlpha(Uint8 alpha) ;
        void render(int x, int y, SDL_Rect *clip=NULL) ;
        int getWidth() ;
        int getHeight() ;
    private:
        SDL_Texture* mTexture ;
        int mWidth ;
        int mHeight ;
};

SDL_Window* gWindow=NULL ;

bool init() {

}

bool loadMedia(){

}

void close() {

}

int main(int argc, char* argv[]) {

}