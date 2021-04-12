#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow : public Window {
protected:
    bool boolCount = true;
    double par1 = 0, par2 = 0, par3 = 0, par4 = 0;

    std::shared_ptr <SDL_Texture> _treeOne;
    std::shared_ptr <SDL_Texture> _treeTwo;
    std::shared_ptr <SDL_Texture> _cloudOne;
    std::shared_ptr <SDL_Texture> _cloudTwo;
    std::shared_ptr <SDL_Texture> _cloudThree;
    std::shared_ptr <SDL_Texture> _airplane;
    std::shared_ptr <SDL_Texture> _helicopter;
    std::shared_ptr <SDL_Texture> _helicopterLeft;
    std::shared_ptr <SDL_Texture> _sun;
    std::shared_ptr <SDL_Texture> _butterflyLeft;

    std::shared_ptr <SDL_Texture> _butterflyRight;
    double xButterfly = 1000, yButterfly = 550;
    bool Left = true;

    std::shared_ptr <SDL_Texture> _loog1;
    std::shared_ptr <SDL_Texture> _loog2;
    std::shared_ptr <SDL_Texture> _loog3;
    std::shared_ptr <SDL_Texture> _hills;
    std::shared_ptr <SDL_Texture> _mountain1;
    std::shared_ptr <SDL_Texture> _mountain2;
    std::shared_ptr <SDL_Texture> _mountain3;
    std::shared_ptr <SDL_Texture> _mountain4;
    std::shared_ptr <SDL_Texture> _mountain5;

    double xCloud1 = 410, xCloud2 = 190, xCloud3 = 1170, xCloud4 = 880, xCloud5 = 60, xCloud6 = 880, xCloud7 = 30, xCloud8 = -280;
    double xHeli = -250, xAir = 1400;
    bool heliLeft = false;
public:
    ExampleWindow(
            int width = DEFAULT_WIDTH,
            int height = DEFAULT_HEIGHT
    );

    virtual ~ExampleWindow() = default;

    virtual void render() override;

    virtual void handle_keys(const Uint8 *keys) override;

    virtual void do_logic();
};

#endif /* EXAMPLEWINDOW_H_ */
