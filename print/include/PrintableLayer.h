// PrintableLayer.h

#pragma once

#include "LayerLayout.h"
#include "PrintArguments.h"

#include "types.h"

#include <iostream>
#include <memory>

/// An interface for classes that can print human-friendly descriptions of themselves
///
class PrintableLayer 
{
public:
    /// default virtual destructor
    ///
    virtual ~PrintableLayer() = default;

    /// Prints a human-firiendly description of the underlying class to an output stream
    ///
    virtual LayerLayout Print(std::ostream& os, double left, double top, uint64 layerIndex, const PrintArguments& Arguments) const = 0;

protected:
    LayerLayout Print(std::ostream& os, double left, double top, uint64 layerIndex, const std::string& typeName, uint64 size, const ElementLayoutArguments& elementLayout, const LayerStyleArguments& layerStyle) const;
};

 