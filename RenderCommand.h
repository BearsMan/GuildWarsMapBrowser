#pragma once
#include "MeshInstance.h"

struct RenderCommand
{
    std::shared_ptr<MeshInstance> meshInstance;
    D3D11_PRIMITIVE_TOPOLOGY primitiveTopology;
};
