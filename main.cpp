#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(FPSMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        // Force Cocos2d engine target interval to 120 FPS
        auto director = CCDirector::sharedDirector();
        if (director) {
            director->setAnimationInterval(1.0 / 120.0);
        }

        // Apply GD internal custom FPS target
        if (auto gameManager = GameManager::sharedState()) {
            gameManager->m_customFPSTarget = 120.0f;
        }

        log::info("Target FPS successfully set to 120 FPS.");
        return true;
    }
};