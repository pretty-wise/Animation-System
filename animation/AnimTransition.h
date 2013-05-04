#pragma once

#include "engine/animation/AnimBlendTree.h"

//---------------------------------------------------------------------------------------
namespace Engine{
//---------------------------------------------------------------------------------------

class AnimTransition{
public:
    inline StringId GetName() const;
private:
    // transition name.
    StringId m_name;
};

//---------------------------------------------------------------------------------------

inline AnimTransition::GetName() const
{
    return m_name;
}
    
//---------------------------------------------------------------------------------------
} // namespace Engine
//---------------------------------------------------------------------------------------