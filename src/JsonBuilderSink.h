// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <functional>

#include "BabelPtr.h"

struct bt_component_class;

namespace jsonbuilder {
class JsonBuilder;
}

namespace LttngConsume {

BabelPtr<const bt_component_class_sink> GetJsonBuilderSinkComponentClass();

struct JsonBuilderSinkInitParams
{
    std::function<void(jsonbuilder::JsonBuilder&&)>* OutputFunc = nullptr;
};

}
