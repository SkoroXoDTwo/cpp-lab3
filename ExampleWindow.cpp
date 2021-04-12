#include "ExampleWindow.h"
#include <stdexcept>
#include <iostream>

#include <SDL2/SDL_image.h>
#include <SDL2/SDL.h>

ExampleWindow::ExampleWindow(int width, int height) : Window(width, height) {

    _treeOne = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "tree_1.png"),
            SDL_DestroyTexture
    );

    _treeTwo = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "tree_2.png"),
            SDL_DestroyTexture
    );

    _cloudOne = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "cloud_1.png"),
            SDL_DestroyTexture
    );

    _cloudTwo = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "cloud_2.png"),
            SDL_DestroyTexture
    );

    _cloudThree = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "cloud_3.png"),
            SDL_DestroyTexture
    );

    _airplane = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "airplane.png"),
            SDL_DestroyTexture
    );

    _helicopter = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "helicopter.png"),
            SDL_DestroyTexture
    );

    _helicopterLeft = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "helicopter_left.png"),
            SDL_DestroyTexture
    );

    _sun = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "sun.png"),
            SDL_DestroyTexture
    );

    _butterflyLeft = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "butterfly_left.png"),
            SDL_DestroyTexture
    );

    _butterflyRight = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "butterfly_right.png"),
            SDL_DestroyTexture
    );

    _loog1 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "loog_1.png"),
            SDL_DestroyTexture
    );

    _loog2 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "loog_2.png"),
            SDL_DestroyTexture
    );

    _loog3 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "loog_3.png"),
            SDL_DestroyTexture
    );

    _hills = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "hills.png"),
            SDL_DestroyTexture
    );

    _mountain1 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "mountain_1.png"),
            SDL_DestroyTexture
    );

    _mountain2 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "mountain_2.png"),
            SDL_DestroyTexture
    );

    _mountain3 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "mountain_3.png"),
            SDL_DestroyTexture
    );

    _mountain4 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "mountain_4.png"),
            SDL_DestroyTexture
    );

    _mountain5 = std::shared_ptr<SDL_Texture>(
            IMG_LoadTexture(_renderer.get(), "mountain_5.png"),
            SDL_DestroyTexture
    );
}

void ExampleWindow::render() {
    double red = 21;
    double green = 141;
    double blue = 217;
    for (double y = 0; y <= 400; y += 0.4) {
        SDL_SetRenderDrawColor(_renderer.get(), red, green, blue, 255);
        SDL_RenderDrawLine(_renderer.get(), 0, y, 1280, y);
        blue += 0.015;
        green += 0.34;
        red += 0.123;
    }

    SDL_Rect sun{800, 0, 400, 400};
    SDL_RenderCopy(_renderer.get(), _sun.get(), nullptr, &sun);

    SDL_Rect cloud2{xCloud2, 180, 110, 15}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudOne.get(), nullptr, &cloud2);

    SDL_Rect cloud3{xCloud3, 240, 110, 15}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudOne.get(), nullptr, &cloud3);

    SDL_Rect cloud5{xCloud5, 40, 261, 45}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudTwo.get(), nullptr, &cloud5);

    SDL_Rect cloud6{xCloud6, 60, 264, 40}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudThree.get(), nullptr, &cloud6);

    SDL_Rect cloud7{xCloud7, 240, 66, 10}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudThree.get(), nullptr, &cloud7);

    SDL_Rect cloud8{xCloud8, 130, 198, 30}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudOne.get(), nullptr, &cloud8);

    SDL_Rect mount4{625, 150, 453, 184}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _mountain4.get(), nullptr, &mount4);

    SDL_Rect mount2{37, 159, 625, 251}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _mountain2.get(), nullptr, &mount2);

    SDL_Rect cloud1{xCloud1, 110, 295, 40}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudOne.get(), nullptr, &cloud1);

    SDL_Rect mount3{200, 120, 900, 360}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _mountain3.get(), nullptr, &mount3);

    SDL_Rect cloud4{xCloud4, 200, 174, 30}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _cloudTwo.get(), nullptr, &cloud4);

    SDL_Rect mount1{-200, 271, 600, 209}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _mountain1.get(), nullptr, &mount1);

    SDL_Rect mount5{695, 198, 705, 282};
    SDL_RenderCopy(_renderer.get(), _mountain5.get(), nullptr, &mount5);

    SDL_Rect helicopter{xHeli, 200, 250, 110}; // @suppress("Invalid arguments")
    if (heliLeft)
        SDL_RenderCopy(_renderer.get(), _helicopterLeft.get(), nullptr, &helicopter);
    else
        SDL_RenderCopy(_renderer.get(), _helicopter.get(), nullptr, &helicopter);

    SDL_Rect airplane{xAir, 70, 150, 55}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _airplane.get(), nullptr, &airplane);

    SDL_Rect hills{-94 + par4, 400, 2894, 95}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _hills.get(), nullptr, &hills);

    SDL_Rect loog3{-94 + par3, 480, 2885, 182}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _loog3.get(), nullptr, &loog3);

    SDL_Rect loog2{-94 + par2, 378, 2897, 342}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _loog2.get(), nullptr, &loog2);

    SDL_Rect loog1{-94 + par1, 596, 2878, 124}; // @suppress("Invalid arguments")
    SDL_RenderCopy(_renderer.get(), _loog1.get(), nullptr, &loog1);

    SDL_Rect butterfly{xButterfly, yButterfly, 70, 61}; // @suppress("Invalid arguments")
    if (!Left)
        SDL_RenderCopy(_renderer.get(), _butterflyRight.get(), nullptr, &butterfly);
    else
        SDL_RenderCopy(_renderer.get(), _butterflyLeft.get(), nullptr, &butterfly);
}

void ExampleWindow::handle_keys(const Uint8 *keys) {
    if (keys[SDL_SCANCODE_LEFT] && xButterfly >= 0) {
        xButterfly -= 3;
        Left = true;
    }

    if (keys[SDL_SCANCODE_RIGHT] && xButterfly <= 1210) {
        xButterfly += 3;
        Left = false;
    }

    if (keys[SDL_SCANCODE_DOWN] && yButterfly <= 650) {
        yButterfly += 3;
    }

    if (keys[SDL_SCANCODE_UP] && yButterfly >= 450) {
        yButterfly -= 3;
    }
}

void ExampleWindow::do_logic() {
    if (!boolCount) {
        xHeli -= 2;
        par1 += 1.5;
        par2 += 1.2;
        par3 += 0.7;
        par4 += 0.3;
    } else {
        xHeli += 2;
        par1 -= 1.5;
        par2 -= 1.2;
        par3 -= 0.7;
        par4 -= 0.3;
    }

    if (xHeli == 1300) {
        heliLeft = true;
        boolCount = false;
    }
    if (xHeli == -250) {
        boolCount = true;
        heliLeft = false;
    }


    xCloud1 += 0.3;
    if (xCloud1 >= 1280)
        xCloud1 = -295;

    xCloud2 += 0.3;
    if (xCloud2 >= 1280)
        xCloud2 = -110;

    xCloud3 += 0.3;
    if (xCloud3 >= 1280)
        xCloud3 = -110;

    xCloud4 += 0.3;
    if (xCloud4 >= 1280)
        xCloud4 = -174;

    xCloud5 += 0.3;
    if (xCloud5 >= 1280)
        xCloud5 = -261;

    xCloud6 += 0.3;
    if (xCloud6 >= 1280)
        xCloud6 = -264;

    xCloud7 += 0.3;
    if (xCloud7 >= 1280)
        xCloud7 = -66;

    xCloud8 += 0.3;
    if (xCloud8 >= 1280)
        xCloud8 = -198;

    xAir -= 0.7;
    if (xAir <= -200)
        xAir = 1300;
}
